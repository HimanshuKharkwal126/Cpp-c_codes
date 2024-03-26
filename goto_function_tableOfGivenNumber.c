#include<stdio.h>
int main(){
	int num,i=1;
	printf("enter the no:");
	scanf("%d",&num);
	himanshu:
		printf("\n%d*%d=%d",num,i,num*i);
		i++;
		if(i<=10)
{
	goto himanshu;
}}