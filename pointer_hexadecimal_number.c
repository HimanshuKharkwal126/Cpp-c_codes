#include<stdio.h>
int main(){
	int a=20;
	int *p=&a;
	int **q=&p;
	printf("value of a is %d\n",a);
	printf("address of a is %x\n",&a);
printf("address of a is %x\n",p);
printf("value of a is %d",*p);
printf("address of pointer is %x\n",&p);
printf("\n%x",q);
printf("\n%x",*(*q));

}