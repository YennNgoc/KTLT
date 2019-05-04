#include "pch.h"

user CreateUser()
{
	user User;
	char Checkpw[10];
	getUsername(User.username);
	getPassword(User.hashpw);
	getPassword(Checkpw);
	if (strcmp(User.hashpw, Checkpw) == 0)
	{
	}
	else
		printf("Vui long kiem tra lai mat khau!");
}





