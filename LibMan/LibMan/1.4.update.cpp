#include "pch.h"
user getPersonal_Infor()
{
	user User;
	User.name = new char(30);
	User.cmnd = new char(9);
	User.address = new char(30);
	printf("Ten: ");
	gets_s(User.name, 30);
	char* dob = new char[10];
	gets_s(dob, 15);
	User.dob = GetTime(dob);
	printf("Gioi tinh( Nam:M / Nu:F / Khac:? ):");
	scanf("%c", &User.gender);
	printf("CMND: ");
	gets_s(User.cmnd, 10);
	printf("Dia chi: ");
	gets_s(User.address, 30);
	return User;
}

