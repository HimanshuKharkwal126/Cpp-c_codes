#include<stdio.h>
int factorial(int n);
int factorial(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact=fact*1;
		
		}return fact;
}
int main(){
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("factorial is %d",factorial(n));
}