#include "pch.h"

book GettoEdit()
{
	book Edit = Search_Title();
	printf("Ban muon chinh sua cuon sach nay?");
	printf("\t1. Chinh sua");
	printf("\t0. Quay lai");
	unsigned int chon;
	do
	{
		printf("\t ---> Chon: ");
		scanf("%d", &chon);
	} while (chon != 1 && chon != 0);
	if (chon == 1)
	{
		Edit_Book(Edit);
	}
	printf("Thong tin da sua!!!");
}

void Edit_Book(book Edit)
{
	Del_Book(Edit);
	book Get = AddBookInfor();
	Add_Book(Get);
}