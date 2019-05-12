#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS
#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include <iostream>

struct user
{
	char *username;
	char *hashpw;
	char *name;
	tm dob;
	char *cmnd;
	char *address;
	char gender; // M/F/?
	bool activated;
	int role;
	// -1 = admin
	// 0 = quan ly
	// 1 = nhan vien
};
struct member
{
	char libraryId[9];
	char *name;
	tm dob;
	char *cmnd;
	char gender; // M/F/?
	char *email;
	char *address;
	tm doc; // ngay lap the
	tm expDate; // ngay het han
	
};
struct book
{
	char isbn[13];
	char *title;
	char *author;
	char *publisher;
	char *year;
	char *gerne;
	char *rack;
	unsigned int copies; // so quyen sach;
};
struct borrowSlip
{
	char libraryId[9];
	tm borrowDate;	
	tm expectedReturnDate;
	tm actualReturnDate;
	char *borrowList; // init -> assign isbn
};

//Funcget
void getPassword(char *pw);
void getUsername(char *user);
user getPersonal_Infor();
//FuncTime
tm GetTime(char *input);
char* TimetoStr(tm time);
//Func
int login();

//FuncUser

//FuncBook
book GetBookInfor(FILE *f);
book AddBookInfor();
void PrintBookInfor(book BookInfor);
book Search_Title();
void Add_Book(book Add)
void Del_Book(book Del);
#endif //PCH_H