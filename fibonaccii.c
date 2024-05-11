#include<stdio.h>
int main(){
	int a=0,b=1,sum=0,i,range;
	printf("enter the range");
	scanf("%d",&range);
	printf("%d\n %d\n",a,b);
	for(i=0;i<range;i++){
		sum=a+b;
		a=b;
		b=sum;
		printf("%d\n",sum);
	}
}	