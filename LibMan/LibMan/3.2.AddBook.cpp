#include "pch.h"

book AddBookInfor()
{
	book BookInfor;
	BookInfor.title = new char(70);
	BookInfor.author = new char(50);
	BookInfor.publisher = new char(70);
	BookInfor.year = new char(4);
	BookInfor.gerne = new char(70);
	BookInfor.rack = new char(9);

	printf("[Nhap thong tin sach]\n");
	printf("ISBN                    :");
	gets_s(BookInfor.isbn, 15);
	printf("Ten sach                :");
	gets_s(BookInfor.title, 70);
	printf("Tac gia                 :");
	gets_s(BookInfor.author, 50);
	printf("Ten NXB                 :");
	gets_s(BookInfor.publisher, 70);
	printf("Nam XB                  :");
	gets_s(BookInfor.year, 5);
	printf("The loai                :");
	gets_s(BookInfor.gerne, 20);
	printf("Gia                     :");
	gets_s(BookInfor.rack, 9);
	printf("So luong                :");
	scanf("%d", &BookInfor.copies);
	return BookInfor;
}

void Add_Book(book Add)
{
	FILE *f = fopen("DSSach.csv", "at");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		fseek(f, 0, SEEK_END);
		fprintf(f, "\n");
		fprintf(f, "%s;%s;%s;%s;%s;%s;%s;%d", Add.isbn, Add.title, Add.author, Add.publisher, Add.year, Add.gerne, Add.rack, Add.copies);
	}
	fclose(f);
	printf("Them sach thanh cong!");
}