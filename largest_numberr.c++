#include<iostream>
using namespace std;
int main(){
int arr[5],i;
for(i=0;i<=4;i++){
cout<<"enter the element "<<i<<":";
cin>>arr[i];                    //get largest no from elements
}for(i=0;i<=4;i++){
	cout<<"value of arr "<<i<< "is "<<arr[i]<<endl;
}
for(i=1;i<=4;i++){
	if(arr[0]<arr[i]){
		arr[0]=arr[i];
	}	
}
	cout<<"largest element is "<<arr[0];
}