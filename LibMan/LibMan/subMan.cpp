#include "pch.h"

subscriber getSubInfo(FILE *f)
{
	subscriber subInfo;
	char *sub = new char[290]; // chinh 290 lai thanh ???
	char * dobBuffer = new char(10);
	char * docBuffer = new char(10);
	char * expDateBuffer = new char(10);

	fgets(sub, 300, f);
	strcpy(subInfo.libraryId, strtok(sub, ";"));
	subInfo.name = strtok(NULL, ";");
	dobBuffer = strtok(NULL, ";");
	strptime(dobBuffer, "%d/%m/%Y", subInfo.dob);
	subInfo.cmnd = strtok(NULL, ";");
	subInfo.gender = strtok(NULL, ";");
	subInfo.email = strtok(NULL, ";");
	subInfo.address = strtok(NULL, ";");
	docBuffer = strtok(NULL, ";");
	strptime(docBuffer, "%d/%m/%Y", subInfo.doc);
	expDateBuffer = strtok(NULL, ";");
	strptime(expDateBuffer, "%d/%m/%Y", subInfo.expDate);
	delete(sub);
	delete(dobBuffer);
	delete(docBuffer);
	delete(expDateBuffer);
	return subInfo;
}

void printSubInfo(subscriber subInfo)
{
	char * dobBuffer = new char(10);
	strftime(dobBuffer, 10, "%d/%m/%Y", subInfo.dob);
	char * docBuffer = new char(10);
	strftime(docBuffer, 10, "%d/%m/%Y", subInfo.doc);
	char * expDateBuffer = new char(10);
	strftime(expDateBuffer, 10, "%d/%m/%Y", subInfo.expDate);
	printf("Ma so thanh vien        :");
	puts(subInfo.libraryId);
	printf("Ho va ten               :");
	puts(subInfo.name);
	printf("Ngay sinh               :");
	puts(dobBuffer);
	printf("So CMND/CCCD            :");
	puts(subInfo.cmnd);
	printf("Gioi tinh               :");
	puts(subInfo.gender);
	printf("Email                   :");
	puts(subInfo.email);
	printf("Dia chi                 :");
	puts(subInfo.address);
	printf("Ngay tao the            :");
	puts(docBuffer);
	printf("Ngay het han            :");
	puts(expDateBuffer);
	delete(dobBuffer);
	delete(docBuffer);
	delete(expDateBuffer);
}
