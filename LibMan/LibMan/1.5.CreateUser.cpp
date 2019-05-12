#include "pch.h"

user CreateUser()
{
	user User;
	printf("[Tao nguoi dung]\n");
	User.username = new char(10);
	User.hashpw = new char(10);
	User.address = new char(30);
	char Checkpw[10];
	printf("Nhap ten nguoi dung: ");
	getUsername(User.username);
	printf("Nhap mat khau: ");
	getPassword(User.hashpw);
	printf("Nhap lai mat khau: ");
	getPassword(Checkpw);
	while (strcmp(User.hashpw, Checkpw) != 0)
	{
		printf("Vui long kiem tra lai mat khau!");
		printf("Nhap lai mat khau: ");
		getPassword(Checkpw);
	}
	User = getPersonal_Infor();
	return User;
}
void SaveInfor(user User)
{
	FILE *f = fopen("DSNguoiDung.csv", "a+");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		char* dob = TimetoStr(User.dob);
		printf("Tao nguoi dung thanh cong!");
		fprintf(f, "%s;%s;%s;%s;%s;%s;%c", User.username, User.hashpw, User.name, dob, User.cmnd, User.address, User.gender);
		fclose(f);
	}
}





