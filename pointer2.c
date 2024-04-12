#include<stdio.h>
int main(){
	int a=20;
	int *p;
	p=&a;
	printf("value of a is %d\n",a);
	printf("address of a is %d\n",&a);
printf("address of a is %d\n",p);
}