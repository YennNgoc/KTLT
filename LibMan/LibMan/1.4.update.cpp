#include "pch.h"
user getPersonal_Infor()
{
	user User;
	User.name = new char(30);
	User.cmnd = new char(9);
	printf("[Cap nhat thong tin ca nhan]\n");
	printf("Ten: ");
	gets_s(User.name, 30);
	printf("CMND: ");
	gets_s(User.cmnd, 10);
	printf("Gioi tinh( Nam:M / Nu:F / Khac:? ):");
	scanf("%c", &User.gender);
	return User;
}

