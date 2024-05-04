#include<stdio.h>
int main(){
	int arr[]={1,8,4,7,6};
	int i,j,temp;
	for(i=0;i<=4;i++){
	for(j=0;j<=4;j++){
		if(arr[i]>=arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	for(i=0;i<=4;i++){
		printf("%d\t",arr[i]);
	}
}