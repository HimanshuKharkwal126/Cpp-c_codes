#include<stdio.h>
//int sum(int);
int sum(int a){
	a=a+1;
	return a;
}
int main(){
	int a=5;
	printf("value of a before function call:%d\n",a);
	printf("function call:%d",sum(a));
	printf("value of a after function call:%d\n",a);
}
