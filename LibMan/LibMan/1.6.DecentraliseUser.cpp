#include "pch.h"

user Access_User()
{
	user User;
	printf("[Phan quyen nguoi dung]\n");
	User.username = new char(10);

	printf("Nhap username nguoi dung can phan quyen: ");
	getUsername(User.username);
	printf("Chon:  ");
	printf("\t 0. Chan Nguoi dung  ");
	printf("\t 1. Kich hoat Nguoi dung  ");
	
	int chon;
	do
	{
		printf("\t --- Nhap lenh: ");
		scanf("%d", &chon);
	}
	while (chon != 0 && chon != 1);
	if (chon == 1)
		User.activated = true;
	else
		User.activated = false;
	
	printf("Phan quyen:  ");
	printf("\t 0. Quan ly  ");
	printf("\t 1. Nhan vien  ");
	
	do
	{
		printf("\t --- Nhap lenh: ");
		scanf("%d", &User.role);
	} while (User.role != 0 && User.role != 1);
	
	return User;
}
void Decentralize(user User)
{
	FILE *f = fopen("DSPhanQuyen.csv", "a+");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		printf("Phan quyen nguoi dung thanh cong!");
		fprintf(f, "%s;%s;%s;%d", User.username, User.hashpw, User.activated, User.role);
		fclose(f);
	}
}





