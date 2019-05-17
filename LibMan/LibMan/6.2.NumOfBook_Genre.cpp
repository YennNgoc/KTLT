#include "pch.h"

void BookList()  //CHUA SUA
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
		printf("\t\t\t[SO LUONG SACH TRONG KHO THEO THE LOAI]\n");
		int N = 0;
		while (!feof(f))
		{
			Get = GetBookInfor(f);
			N = N + Get.copies;
		}
		printf("Trong kho hien con %d cuon sach! \n", N);
	}
	fclose(f);
}