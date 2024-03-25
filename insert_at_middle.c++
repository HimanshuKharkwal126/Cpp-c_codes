#include<iostream>
using namespace std;
int main(){
int arr[5]={2,5,6,4,8};
int size=sizeof(arr)/sizeof(int);
int i,item,pos;
cout<<"enter the position of element:";
cin>>pos;
cout<<"enter the element you want to insert:";
cin>>item;
for(i=size-1;i>=pos-1;i--){
	arr[i+1]=arr[i];
}
arr[pos-1]=item;
size++;
for(i=0;i<=size-1;i++){
	cout<<arr[i]<<" is at "<<i+1<<" position:"<<endl;
}
}