#include<stdio.h>

	int sum(int *,int *);
	int sum(int *p,int *q){
	int sum=*p+*q;
	return sum;
}
int main(){

int a=5;
int b=10;
printf("%d",sum(&a,&b));
}