#include<stdio.h>
int main(){
	int i,j,current;
	int arr[5]={2,7,5,4,6};
	for(i=1;i<5;i++){
		current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
		arr[j+1]=arr[j];
		j--;	
		}
		arr[j+1]=current;	
	}
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}                            