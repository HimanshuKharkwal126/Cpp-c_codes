#include<stdio.h>
int main(){
	int c,fail;
	printf("enter your class");
	scanf("%d",&c);
	printf("enter the fail subject");
	scanf("%d",&fail);
	switch(c){
		case 1:
		switch(fail){
		case 1:
		case 2:
		case 3:
		printf("you have got grace marks of 5 in each subject");
		break;
		default:
		printf("no grace");
		break;
		} 
		break;
		case 2:
		switch(fail){
		case 1:
		case 2:
		printf("you have got grace marks of 4 in each subject");
		break;
		default:
		printf("no grace");
		break;
		} 
		break;
		case 3:
		switch(fail){
		case 1:
		printf("you have got grace marks of 3 in each subject");
		break;
		default:
		printf("no grace");
		break;
		} 
		default:
		printf("please enter valid input");
		}
}