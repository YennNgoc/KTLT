#include "pch.h"

void Search_ISBN()
{
	book Get;
	int i = 1;
	FILE *f = fopen("DSSach.csv", "r");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		printf("\t\t\t[Tim sach theo ISBN]\n");
		printf("Nhap ISBN sach can tim: ");
		char *Title = new char[13];
		bool check = false;
		gets_s(Title, 15);
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
}