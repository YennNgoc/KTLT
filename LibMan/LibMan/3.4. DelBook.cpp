#include "pch.h"

book GettoDel()
{
	book Del = Search_Title();
	printf("Ban muon xoa cuon sach nay?");
	printf("\t1. Xoa");
	printf("\t0. Quay lai");
	unsigned int chon;
	do
	{
		printf("\t ---> Chon: ");
		scanf("%d", &chon);
	} while (chon != 1 && chon != 0);
	if (chon == 1)
	{
		Del_Book(Del);
	}
}

void Del_Book(book Del)
{
	rename("DSSach.csv", "DSSach01.csv");
	FILE *f = fopen("DSSach01.csv", "r");
	if (f == NULL)
	{
		printf("Loi!!!");
	}
	{
		while (!feof(f))
		{
			book Get = GetBookInfor(f);
			if (strcmp(Get.title, Del.title) != 0)
			{
				Add_Book(Get);
			}
		}
		fclose(f);
		remove("DSSach01.csv");
		printf("Xoa sach thanh cong!");
	}
}