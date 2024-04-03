#include<iostream>
using namespace std;
int linear_search(int arr[],int x,int n){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			count++;
			break;
		}
	}
	return count;
}
int main(){
	int x;
	int arr[]={5,15,5,10,7};
	cout<<"enter the element you want to search:";
	cin>>x;
	int size=sizeof(arr)/sizeof(int);
	int result=linear_search(arr,x,size);
	(result==0)?cout<<"element not found:":cout<<"element found:";
}

