#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS
#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include <iostream>
struct user
{
	char *username;
	char *hashpw;
	char *name;
	struct dob
	{
		char date[2];
		char month[2];
		char year[4];
	};
	char *cmnd;
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
	struct dob
	{
		char date[2];
		char month[2];
		char year[4];
	};
	char *cmnd;
	char gender; // M/F/?
	char *email;
	char *address;
	struct doc // ngay lap the
	{
		char date[2];
		char month[2];
		char year[4];
	};
	struct expDate // ngay het han
	{
		char date[2];
		char month[2];
		char year[4];
	};
};
struct book
{
	char isbn[13];
	char *title;
	char *author;
	char *publisher;
	char year[4];
	char *gerne;
	char *rack;
	unsigned int copies; // so quyen sach;
};
struct borrowSlip
{
	char libraryId[9];
	struct borrowDate
	{
		char date[2];
		char month[2];
		char year[4];
	};
	struct expectedReturnDate
	{
		char date[2];
		char month[2];
		char year[4];
	};
	struct actualReturnDate
	{
		char date[2];
		char month[2];
		char year[4];
	};
	char *borrowList; // init -> assign isbn
};
void getPassword(char *pw);
void getUsername(char *user);
user getPersonal_Infor();
int login();
#endif //PCH_H