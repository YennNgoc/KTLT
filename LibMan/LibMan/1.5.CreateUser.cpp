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
	FILE *f = fopen("DSNguoiDung.txt", "wt");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		fputs(User.username, f);
		fputs(User.hashpw, f);
		fputs(User.name, f);
		// day of birth
		fputs(User.cmnd, f);
		fputs(User.address, f);
		fprintf(f, "%c", User.gender);
		fclose(f);
	}
}





