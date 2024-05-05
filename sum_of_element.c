#include<stdio.h>
int main(){
int arr[]={1,2,3,4};
int i,sum=0;
int len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++){
	sum=sum+arr[i];
}
	printf("%d",sum);
}