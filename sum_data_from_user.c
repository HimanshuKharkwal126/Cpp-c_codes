#include<stdio.h>
int main(){
int i,sum=0;
int arr[5];
for(i=0;i<5;i++){
	printf("enter the element:");
	scanf("%d",&arr[i]);
}
int len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++){
	sum=sum+arr[i];
}
printf("%d",sum);
}