#include<iostream>
using namespace std;
int main(){
	int n1,i,fact=1;
	cout<<"enter the number:";
	cin>>n1;
	for(i=1;i<=n1;i++){
		fact=fact*i;
	}
	cout<<"factorial of num is :"<<fact;
}

