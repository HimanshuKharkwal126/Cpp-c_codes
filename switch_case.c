#include<stdio.h>
int main(){
 int add,sub,mul,choice,a,b;
 float div;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter 1 for add,2 for sub,3 for mul,4 for div,5 for exit");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			add=a+b;
			printf("add is %d",add);
	}
	switch(choice){
		case 2:
			sub=a-b;
			printf("sub is %d",sub);
	}
	switch(choice){
		case 3:
			mul=a*b;
			printf("mul is %d",mul);
	}
	switch(choice){
		case 4:
			div=a/b;
			printf("div is %f",div);
			
	}
		int a,b,add,sub,mul,choice;
	float div;
}