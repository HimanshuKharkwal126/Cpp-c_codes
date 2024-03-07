#include<stdio.h>
int main(){
 int a,fact=1,i;
	printf("enter the value of a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){

	fact=fact*i;
}
printf("THE FACTORIAL VALUE OF A IS %d",fact);
}
