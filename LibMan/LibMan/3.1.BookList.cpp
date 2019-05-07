#include "pch.h"

void BookList()
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
		printf("\t\t\t[DANH SACH CAC CUON SACH TRONG KHO]\n");
		while (!feof(f))
		{
			printf("\n------------------------------------->%d<------------------------------------------\n", i);
			Get = GetBookInfor(f);
			PrintBookInfor(Get);
			i++;
		}
	}
	fclose(f);
}