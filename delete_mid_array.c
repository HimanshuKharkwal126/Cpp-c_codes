                                        //  Delete element from given position:
#include<stdio.h>
int main(){
	int arr[50],i,n,pos;
	
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter the element:");
		scanf("%d",&arr[i]);
	}
//	
//	for(i=0;i<n;i++){
//		printf("\n%d",arr[i]);                       // for printing array before deletion
//	}
//	
	printf("\nenter the position you want to delete:");
	scanf("\n%d",&pos);
	
	for(i=pos-1;i<n;i++){
		arr[i]=arr[i+1];
	}
	printf("Final array is:");
	for(i=0;i<n-1;i++){
		printf("\narray is:%d",arr[i]);
	}
}