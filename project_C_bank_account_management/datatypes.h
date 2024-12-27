#include<stdbool.h>
struct Date{
	int day,month,year;
};
struct User{
	char userId[10];
	char name[20];
	char phone[10];
	char email[20];
	char password[10];
	char status[10];
};
struct User users[100];
