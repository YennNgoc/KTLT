#include "pch.h"
void getPassword(char *pw)
{
	char c, password[10];
	int i=0;
	while ((c = _getch()) != 13){
		password[i] = c;
		printf("*");
		i++;
	}
	password[i] = '\0';
	strcpy(pw, password); printf("\n");
}
void getUsername(char *user)
{
	char c, username[10];
	int i = 0;
	while ((c = _getch()) != 13) {
		username[i] = c;
		printf("%c",c);
		i++;
	}
	username[i] = '\0';
	strcpy(user, username); printf("\n");
}
int login() {
	char *username = new char(10);
	char *password = new char(10);

	printf("Nhap username: ");
	getUsername(username);
	printf(username);

	printf("Nhap mat khau: ");
	getPassword(password);
	printf(password);

	// authentication

	// call appropriate interface based on user role

	return 1;
}
