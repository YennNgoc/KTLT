#include "pch.h"

book GetBookInfor(FILE *f)
{
	book BookInfor;
	char *Book = new char[290];
	char *copies = new char(5);
	fgets(Book, 300, f);
	strcpy(BookInfor.isbn, strtok(Book, ";"));
	BookInfor.title = strtok(NULL, ";");
	BookInfor.author = strtok(NULL, ";");
	BookInfor.publisher = strtok(NULL, ";");
	BookInfor.year = strtok(NULL, ";");
	BookInfor.gerne = strtok(NULL, ";");
	BookInfor.rack = strtok(NULL, ";");
	copies = strtok(NULL, "\n");
	BookInfor.copies = atoi(copies);
	delete(Book);
	delete(copies);
	return BookInfor;
}

void PrintBookInfor(book BookInfor)
{
	printf("ISBN                    :");
	puts(BookInfor.isbn);
	printf("Ten sach                :");
	puts(BookInfor.title);
	printf("Tac gia                 :");
	puts(BookInfor.author);
	printf("Ten NXB                 :");
	puts(BookInfor.publisher);
	printf("Nam XB                  :");
	puts(BookInfor.year);
	printf("The loai                :");
	puts(BookInfor.gerne);
	printf("Gia                     :");
	puts(BookInfor.rack);
	printf("So luong                :");
	printf("%d", BookInfor.copies);
}
