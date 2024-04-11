#include<stdio.h>
int main(){
	int a,b,i,sol=1;
	printf("enter the base num:");
	scanf("%d",&a);
	printf("enter the power num:");
	scanf("%d",&b);
for(i=1;i<=b;i++){
	sol=sol*a;
}
printf("sol is %d",sol);	
}