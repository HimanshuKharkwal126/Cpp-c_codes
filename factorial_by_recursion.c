#include<stdio.h>
int fact(int n);
int main(){
	int num,i;
	printf("enter the num:");
	scanf("%d",&num);
	printf("fact is %d",fact(num));
}
int fact(n){
	if (n==1){
		return 1;}
		else{
			return n*fact(n-1);
		}
}