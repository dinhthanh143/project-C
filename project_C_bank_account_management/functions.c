#include"functions.h"
#include <stdio.h>
#include<string.h>
#include <stdbool.h>
//logic ham
void showMenu(){
	printf("  ***Bank Management System Using C***\n\n");
	printf("\t   CHOOSE YOUR ROLE\n");
	printf("\t========================\n");
	printf("\t[1] Admin.\n");
	printf("\t[2] User.\n");
	printf("\t[0] Exit the program.\n");
	printf("\t========================\n");
}
void adminMenu(){
	printf("  ***Bank Management System Using C***\n\n");
	printf("\t   ADMIN MENU\n");
	printf("\t========================\n");
	printf("\t[1] Add A New User.\n");
	printf("\t[2] Show All users.\n");
	printf("\t========================\n");
}
void inputUsersData(struct User users[], int *length){
	getchar();
	printf("Enter User ID: ");
	fgets(users[*length].userId,sizeof(users[*length].userId),stdin);
    users[*length].userId[strcspn(users[*length].userId,"\n")]='\0';
    printf("Enter User Name: ");
    fgets(users[*length].name,sizeof(users[*length].name),stdin);
    users[*length].name[strcspn(users[*length].name,"\n")]='\0';
    printf("Enter User Phone Number: ");
    fgets(users[*length].phone,sizeof(users[*length].phone),stdin);
    users[*length].phone[strcspn(users[*length].phone,"\n")]='\0';
    printf("Enter User Email: ");
    fgets(users[*length].email,sizeof(users[*length].email),stdin);
    users[*length].email[strcspn(users[*length].email,"\n")]='\0';
	strcpy(users[*length].password, users[*length].phone);
	strcpy(users[*length].status, "open");
	(*length)+=1;
	printf("Successfully Added User Datas.\n");
}
void showUsersData(struct User users[],int length){
	int i;
	printf("|===========|====================|====================|===========|=======|\n");
	printf("|     ID    |        Name        |        Email       |   Phone   | Status|\n");
	for(i=0;i<length;i++){
		printf("|===========|====================|====================|===========|=======|\n");
		printf("|%s         |%s                  |%s                  |%s         |%s     |\n",users[i].userId,users[i].name,users[i].email,users[i].phone,users[i].status);
	}
}

