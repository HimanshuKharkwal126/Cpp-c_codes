#include<stdio.h>
int doubl(int arr[],int size){
	int i;
	for (i=0;i<size;i++){
		arr[i]=2*arr[i];
	}
}
int main(){
int i;
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
printf("%d",size);
doubl(arr,size);
for(i=0;i<size;i++){
	printf("\n%d",arr[i]);
}
}