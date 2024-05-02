#include<stdio.h>
int add(int a,int b);
int add(a,b){
	int c=a+b;
	return c;
}
int main(){
int a,b;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("sum of a and b is %d",add(a,b));	
}