#include<stdio.h>
void swap(int *,int *);
void swap(int *p,int *q){
	int c;
	c=*p;
	*p=*q;
	*q=c;
	 }
int main(){
	int a=2; 
	int b=3;
    swap(&a,&b);
	printf("value of a is %d\n value of b is %d",a,b);
}
