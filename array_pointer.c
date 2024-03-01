#include<stdio.h>

void func(int arr[], int n){
//	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}

int main(){
	int arr[]={15,45,75,64,12,31};
	int n = sizeof(arr)/sizeof(int);
	printf("\n %d \n",n);
	func(arr,n);

	printf("\n \n ");
	
	int *ptr = arr;
	printf("\nvalue is:%d address is:%p",*ptr,ptr);
	ptr++;
	printf("\nvalue is:%d address is:%p",*ptr,ptr);
	ptr--;
	printf("\nvalue is:%d address is:%p",*ptr,ptr);
	ptr+=2;
	printf("\nvalue is:%d address is:%p",*ptr,ptr);
	
	

}
