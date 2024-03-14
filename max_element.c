#include<stdio.h>
void main(){
	int i,sum=0;
	int arr[]={10,89,67,78,44};
	float arnab[]={45.5,67.7,88.7,34.6,23.5};
int	max=arr[0];
	for(i=0;i<=4;i++){
		if (arr[i]>max){
			max=arr[i];
		}
}
	
		printf("\nmax element is %d",max);
}