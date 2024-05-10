#include<stdio.h>
int sum(int *);
int sum(int *a){
	*a=*a+1;
	*a=*a+1;
	*a=*a+1;
	*a=*a+1;
	return *a;
}
int main(){
	int x=5;
	printf("value of a before function call:%d\n",x);
	printf("function call:%d",sum(&x));
	printf("value of a after function call:%d\n",x);
}
