#include<iostream>
using namespace std;
int main(){
	int i,n;
int arr[100];
cout<<"enter the no:";
cin>>n;                          //get largest no from elements
for(i=0;i<=n;i++){
cout<<"enter the element"<<i+1<<":";
cin>>arr[i];
}
for(i=0;i<=n;i++){
	if(arr[0]<arr[i]){
		arr[0]=arr[i];
	}
}
	cout<<"largest element is "<<arr[0];

}