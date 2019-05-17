#include "pch.h"

void Return()
{
	char *Id = new char[13];
	printf("\t\t\t[PHIEU Tra SACH]\n");
	printf("Nhap Id doc gia: \n");
	gets_s(Id, 15);
	FILE *f = fopen("DSMuon_Tra.csv", "at");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		while (!feof(f))
		{
			//get thgian hien tai
			//viet vao cuoi dong
			
		}
	}
	fclose(f);

}