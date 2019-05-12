#include "pch.h"

book Search_Title()
{
	printf("\t\t\t[Tim sach theo Ten]\n");
	book Get;
	int i = 1;
	FILE *f = fopen("DSSach.csv", "r");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		printf("Nhap Ten sach: ");
		char *Title = new char[100];
		bool check = false;
		gets_s(Title, 110);
		printf("->Ket qua: \n");
		while (!feof(f))
		{

			Get = GetBookInfor(f);
			if (strcmp(Get.title, Title) == 0)
			{
				PrintBookInfor(Get);
				check = true;
				printf("\n");
				break;
			}
		}
		if (check == false)
			printf("Khong co cuon sach nay trong kho!\n");
	}
	fclose(f);
	return Get;
}