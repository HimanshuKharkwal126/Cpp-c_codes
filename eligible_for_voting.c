#include<stdio.h>
int main(){
int age;
printf("enter the age:");
scanf("%d",&age);
if(age>=18){
	printf("you are eligible for vote");
}else{
	printf("you are not eligible for vote");
}	
}