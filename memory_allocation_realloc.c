#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i,*ptr,n1;
	printf("enter the total no of values:");
	scanf("%d",&n);
	ptr =(int *)malloc(n*sizeof(int));
	printf("enter the values:");
	for(i=0;i<5;i++){
		scanf("%d",(ptr+i));
	}
	printf("the updated no of values:");
	scanf("%d",&n1);
	ptr=(int *)realloc(ptr,n1*sizeof(int));
	for(i=n;i<n1;i++);{
	scanf("%d",(ptr+1));
}
	printf("\n the entered values is:");
	for(i=0;i<n1;i++){
		printf("%d\t",*(ptr+1));
		printf("%x\t",(ptr+1));
	}
}
	