#include<iostream>
using namespace std;
int main(){
	int a=90;
	int *ptr=&a;
	cout<<"value of a is:"<<*ptr<<endl;
	int *p=new int(50);                 // derefrence operator
	cout<<"value of p is:"<<*p<<endl;
	cout<<"value at address p is:"<<&*p<<endl;
	cout<<"value at address p is:"<<p<<endl;
	cout<<"value of p is:"<<*((int*)p)<<endl;
	cout<<"address of p is:"<<sizeof(p);
}
	
	
//int i;
//int *arr=new int[5];;
//for(i=0;i<5;i++){
//	cout<<"enter the element:";
//	cin>>arr[i];
//}
//for(i=0;i<5;i++){
//	cout<<arr[i]<<endl;
//}
//}