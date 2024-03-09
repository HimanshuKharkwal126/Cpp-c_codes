#include<stdio.h>
void deepanshu(int a,int b){
	printf("\nadd of two number is %d",a+b);
	printf("\nsubstract of two number is %d",a-b);
	printf("\nmultiply of two number is %d",a*b);
	printf("\ndivide of two number is %d",a/b);
	}
	int main(){
		int a,b,c;
		char ch;
		printf("enter the value of a");
		scanf("%d",&a);
		printf("enter the value of b");
		scanf("%d",&b);
		printf("Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for exist");
		scanf("%d",&c);
		while(c!=5){
			if(c==1){
				sum(a,b);
			}else if(c==2){
				diff(a,b);
			}else if(c==3){
				multiply(a,b);
			}else if(c==4){
				divide(a,b);
			}else if(c==5){
				exist(0);
			}else{
				printf("please enter the valid value");
			}
		}
		
	}