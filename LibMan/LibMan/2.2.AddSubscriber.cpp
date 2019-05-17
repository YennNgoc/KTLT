#include "pch.h"
// cach goi: addSub(addSubInfo());
subscriber addSubInfo()
{
	subscriber subInfo;
	//subInfo.libraryId MA SO = MA SO CU + 1
	subInfo.dob = new tm;
	subInfo.doc = new tm; time_t currentTime;
	time(&currentTime); subInfo.doc = localtime(&currentTime);
	subInfo.expDate = new tm; subInfo.expDate = subInfo.doc;
	subInfo.expDate->tm_year = subInfo.expDate->tm_year = 2;
	subInfo.name = new char(50);
	subInfo.cmnd = new char(12);
	subInfo.email = new char(70);
	subInfo.address = new char(100);
	subInfo.gender = new char;

	printf("[Nhap thong tin doc gia]\n");
	printf("Ho va ten               :");
	gets_s(subInfo.name, 50);
	printf("Gioi tinh (M/F/O)       :");
	gets_s(subInfo.gender, 1);
	printf("So CMND/CCCD            :");
	gets_s(subInfo.cmnd, 12);
	printf("Email                   :");
	gets_s(subInfo.email, 70);
	printf("Dia chi                 :");
	gets_s(subInfo.address, 100);
	char * dob = new char(10);
	printf("Ngay sinh (dd/mm/yyyy)  :");
	gets_s(dob, 10);
	strptime(dob, "%d/%m/%Y", subInfo.dob);

	return subInfo;
}

void addSub(subscriber subInfo)
{
	FILE *f = fopen("DSDocGia.csv", "at");
	if (f == NULL)
	{
		printf("Loi cap nhat!!!");
	}
	else
	{
		char * dobBuffer = new char(10);
		strftime(dobBuffer, 10, "%d/%m/%Y", subInfo.dob);
		char * docBuffer = new char(10);
		strftime(docBuffer, 10, "%d/%m/%Y", subInfo.doc);
		char * expDateBuffer = new char(10);
		strftime(expDateBuffer, 10, "%d/%m/%Y", subInfo.expDate);
		fseek(f, 0, SEEK_END);
		fprintf(f, "\n");

		fprintf(f, "%s;%s;%s;%s;%s;%s;%s;%s;%s", subInfo.libraryId, subInfo.name, subInfo.address, dobBuffer, subInfo.cmnd, subInfo.gender, subInfo.email, subInfo.address, docBuffer, expDateBuffer);
		delete (dobBuffer); delete(docBuffer); delete(expDateBuffer);
	}
	fclose(f);
	printf("Them doc gia thanh cong!");
	delete(subInfo.name);
	delete(subInfo.dob);
	delete(subInfo.cmnd);
	delete(subInfo.gender);
	delete(subInfo.email);
	delete(subInfo.address);
	delete(subInfo.doc);
	delete(subInfo.expDate);
}