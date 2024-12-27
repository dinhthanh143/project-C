#include <stdio.h>
#include <stdlib.h>
#include"functions.h"
#include <stdbool.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choiceMenu,choiceAdmin,choiceUser;
	int run=0;
	int length=0;
	while(run==0){
		showMenu();
		printf("\tEnter The Choice: ");
		scanf("%d", &choiceMenu);
		switch(choiceMenu){
			case 1:
				while(choiceMenu==1){
					adminMenu();
					printf("\tEnter The Choice: ");
					scanf("%d", &choiceAdmin);				
					switch(choiceAdmin){
						case 1:
							inputUsersData(users,&length);
							break;
						case 2:
							showUsersData(users,length);
							break;
						case 3:
							break;	
					
					}
				}
				break;
		
			case 0:
				printf("\n\tExited Program!");
				return 1;	
			default:
				printf("Error!");		
		}
	}
	return 0;
}
