#include<stdio.h>
int sum(int n);
int main(){
	int num,i;
	printf("enter the num:");
	scanf("%d",&num);
	printf("sum is %d",sum(num));
}
int sum(n){
	if (n==1){
		return 1;}
		else{
			return n+sum(n-1);
		}
}