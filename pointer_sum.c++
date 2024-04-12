#include<stdio.h>
int sum(int *,int *);
int sum(int *p,int *q){
	int sum;
	sum=*p+*q;
return sum;
	
}
int main(){
	int a=5;
	int b=15;
	printf("%d\n",sum(&a,&b));
}
