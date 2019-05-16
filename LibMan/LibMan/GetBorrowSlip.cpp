#include "pch.h"

borrowSlip GetBorrow(FILE *f)
{
	borrowSlip Borrow;

	return Borrow;
}

void PrintBorrow(borrowSlip Borrow)
{
	printf("Id: ");
	puts(Borrow.libraryId);
	printf("Ten sach                :");
	puts(Borrow.borrowList);
	
}
