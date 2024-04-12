#include<stdio.h>

void func(int *p){
	*p=*p+5;
	printf("Inside value in function = %d",*p);
}

int main(){
	int x=10;
	//func(x);
	func(&x);
	printf("\n");
	func(&x);
	printf("\n");
	func(&x);
	printf("\n");
	
	printf("outside value on function = %d",x);
	printf("\n \n \n \n");
	
	
	
	
	int *p;
	p=&x;
	printf(" %d \n ",x);//prints the value of x
	printf("%x \n ",p);//prints the address of x in hexadecimal value
	printf("%x\n ",&p);//prints the address of p in hexadecimal value
	*p=*p+30;
	printf("%d \n ",x);//prints the value of x after updating 
	printf("%d \n ",*p);//prints the value located in the given address
}