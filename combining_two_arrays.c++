#include<iostream>
using namespace std;
int main(){
	int a[]={2,5,36,6,15};
	int b[]={7,8,1};
	                   // adding of array { not sum }
	int i,j=0;
	int c[8];
	for(i=0;i<5;i++){
		c[i]=a[i];
		
	}
	for(i=5;i<8;i++){
		c[i]=b[j];
		j++;
	}
	for(i=0;i<8;i++){
		cout<<c[i]<<endl;
	}
}