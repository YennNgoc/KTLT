#include "pch.h"

void listSub()
{
	subscriber get;
	int i = 1;
	FILE *f = fopen("DSDocGia.csv", "r");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		printf("\t\t\t[DANH SACH DOC GIA]\n");
		while (!feof(f))
		{
			printf("\n------------------------------------->%d<------------------------------------------\n", i);
			get = getSubInfo(f);
			printSubInfo(get);
			i++;
		}
	}
	fclose(f);
}