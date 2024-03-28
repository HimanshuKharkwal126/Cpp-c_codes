#include<iostream>
using namespace std;
int main(){
int arr[5]={13,9,8,5,2};
int size=sizeof(arr)/sizeof(int);
int i,pos;
cout<<"enter the position of element:";
cin>>pos;
for(i=pos-1;i<=size-1;i++){
	arr[i]=arr[i+1];
}
size--;
for(i=0;i<=size-1;i++){
	cout<<i<<"position is of:"<<arr[i]<<endl;
}
}