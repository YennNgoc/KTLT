#include "pch.h"
int callFunction(user currentUser) {
	system("CLS");
	switch (currentUser.role)
	{
	case -1:
		adminInterface(currentUser);
		break;
	case 0:
		managerInterface(currentUser);
		break;
	case 1:
		staffInterface(currentUser);
	default:
		break;
	}
	/*
	cout << "Chon chuc nang can dung :<<endl;
	//list functions
	int select = getch();
	switch (select)
	{
		case 1:
			//user management
			break;
		case 2:
			//subscriber management
			break;
		case 3:
			//book man
			break;
		case 4:
			//borrow slip
			break;
		case 5:
			//return slip
			break;
		case 6:
			//statistics
			break;
		default:
			callFunction(currentUser);
			break;
	}
	*/
}
void adminInterface(user currentUser) {
	std::cout << "Chon chuc nang can dung :"<<std::endl;
	//list functions
	int select = getch();
	switch (select)
	{
	case 1:
		//user management
		break;
	case 2:
		//subscriber management
		break;
	case 3:
		//book man
		break;
	case 4:
		//borrow slip
		break;
	case 5:
		//return slip
		break;
	case 6:
		//statistics
		break;
	default:
		callFunction(currentUser);
		break;
	}
}
void managerInterface(user currentUser) {
	std::cout << "Chon chuc nang can dung :" << std::endl;
	//list functions
	int select = getch();
	switch (select)
	{
	case 1:
		//user management
		break;
	case 2:
		//subscriber management
		break;
	case 3:
		//book man
		break;
	case 4:
		//borrow slip
		break;
	case 5:
		//return slip
		break;
	case 6:
		//statistics
		break;
	default:
		callFunction(currentUser);
		break;
	}
}
void staffInterface(user currentUser) {
	std::cout << "Chon chuc nang can dung :" << std::endl;
	//list functions
	int select = getch();
	switch (select)
	{
	case 1:
		//user management
		break;
	case 2:
		//subscriber management
		break;
	case 3:
		//book man
		break;
	case 4:
		//borrow slip
		break;
	case 5:
		//return slip
		break;
	case 6:
		//statistics
		break;
	default:
		callFunction(currentUser);
		break;
	}
}