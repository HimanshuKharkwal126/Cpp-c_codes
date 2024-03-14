#include<iostream>
using namespace std;
int main(){
	int arr[5],i,size,element;
	cout<<"enter the size of an array:";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>arr[i];
                  		        //  FINDING THE  POSITION OF ARRAY..
	}              // for indexing { i }, for position { i+1 }
	cout<<" enter the element to find the position of :";
	cin>>element;
	for(i=0;i<size;i++){
		if(arr[i]==element){
			cout<<"position of "<< element<<" is: "<<i+1 <<endl;
			cout<<"indexing of "<< element<<" is: "<<i;
		}
	}
}