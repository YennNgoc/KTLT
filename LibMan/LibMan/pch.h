#pragma once
#define _XOPEN_SOURCE 700
#define _GNU_SOURCE 1
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <sstream>

extern "C" char* strptime(const char* s,
	const char* f,
	struct tm* tm) {
	std::istringstream input(s);
	input.imbue(std::locale(setlocale(LC_ALL, nullptr)));
	input >> std::get_time(tm, f);
	if (input.fail()) {
		return nullptr;
	}
	return (char*)(s + input.tellg());
}

struct user
{
	char *username;
	char *hashpw;
	char *name;
	tm * dob;
	char *cmnd;
	char *address;
	char gender; // M/F/?
	bool activated;
	int role;
	// -1 = admin
	// 0 = quan ly
	// 1 = nhan vien
};
struct subscriber
{
	char libraryId[9];
	char *name;
	tm * dob;
	char *cmnd;
	char *gender; // M/F/O
	char *email;
	char *address;
	tm * doc; // ngay lap the
	tm * expDate; // ngay het han
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
	char *borrowList; // init -> assign isbn
	tm borrowDate;
	tm expectedReturnDate;
	tm actualReturnDate;
	
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
subscriber getSubInfo(FILE *f);
void printSubInfo(subscriber subInfo);
subscriber addSubInfo();
void addSub(subscriber subInfo);
//FuncBook
book GetBookInfor(FILE *f);
book AddBookInfor();
void PrintBookInfor(book BookInfor);
book Search_Title();
char* Get_ISBN();
bool Search_ISBN(char* ISBN);
void Add_Book(book Add);
void Del_Book(book Del);
