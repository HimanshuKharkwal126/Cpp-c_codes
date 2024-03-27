                              // binary search ....
#include<iostream>
using namespace std;
int binary_search(int arr[],int f,int l,int x,int size){
while(f<=l){                                    // f= first            l=last             m=mid
	int m=(l+f)/2;
	if(arr[m]==x){
		return m;
	} if(arr[m]<x){
		return binary_search(arr,m+1,l,x,size);
	}else{
		return binary_search(arr,f,m-1,x,size);
	}
}	
	return -1;	
	}
int main(){
	int arr[]={5,7,12,15,35,45};      // array must be in assending order:
	int x=12;
	int size=sizeof(arr)/sizeof(int);
	int result=binary_search(arr,0,size-1,x,size);
	(result==-1)?cout<<"element not found:":cout<<"element found:";
}

