#include "pch.h"

void Borrow()
{
	borrowSlip Borrow;
	int Num = 0;
	printf("\t\t\t[PHIEU MUON SACH]\n");
	printf("Nhap Id doc gia: \n");
	gets_s(Borrow.libraryId, 15);
	printf("Nhap so luong sach can muon: \n");
	scanf("%d", Num);
	Borrow.borrowList = new char[Num];
	int n = 0;
	for (int i = 0; i < Num; i++)
	{
		char* ISBN = Get_ISBN();
		bool KT = Search_ISBN(ISBN);
		if (KT == true)
		{
			printf("OK!");
			////Viet vao file"DSMuon_Tra.csv"
			// Giam so sach do trong kho dung ham EditBook
		}	
	}
	
	//BorowDate Ham lay thoi gian hien tai
	//ReturnExpDate Cong len 7 ngay
	
}