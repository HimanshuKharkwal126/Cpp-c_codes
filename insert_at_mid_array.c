#include<stdio.h>
int main(){
int arr[5]={2,5,6,4,8};
int size=sizeof(arr)/sizeof(int);
int i,item,pos;
printf("enter the position of element:");
scanf("%d",&pos);
printf("enter the element you want to insert:");
scanf("%d",&item);
for(i=size-1;i>=pos-1;i--){
	arr[i+1]=arr[i];
}
arr[pos-1]=item;
size++;
for(i=0;i<=size-1;i++){
	printf(arr[i] ,"is at",  i+1 ,"position:");
}
}