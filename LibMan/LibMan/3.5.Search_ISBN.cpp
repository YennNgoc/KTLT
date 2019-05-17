#include "pch.h"

bool Search_ISBN()
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
		printf("\t\t\t[Tim sach theo ISBN]\n"); // Xong thi bo nay vo ham chay ctr
		printf("Nhap ISBN sach: ");
		char *ISBN = new char[13];
		bool check = false;
		gets_s(ISBN, 15);
		printf("->Ket qua: \n");
		while (!feof(f))
		{

			Get = GetBookInfor(f);
			if (strcmp(Get.isbn, ISBN) == 0)
			{
				PrintBookInfor(Get);
				check = true;
				printf("\n");
				break;
			}
		}
		if (check == false)
		{
			printf("Khong co cuon sach nay trong kho!\n");
			return false;
		}
			
	}
	fclose(f);
	return true;
}