#include<stdio.h>
struct book{
		int page;
		char name;
		float price;
	};
	int main(){
	struct book b1,b2;
	printf("enter the pages:");
	scanf("%d\n",&b1.page);
    printf("enter the name:");
	scanf("%c\n",&b1.name);
	printf("enter the price:");
	scanf("%f\n",&b1.price);
	
		printf("enter the pages:");
	scanf("%d\n",&b2.page);
		printf("enter the name:");
	scanf("%c\n",&b2.name);
		printf("enter the price:");
	scanf("%f\n",&b2.price);
	printf("%d%c%f",b1.page,b1.name,b2.price);
	
}