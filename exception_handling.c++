#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<" enter the no:";
cin>>a>>b;
try{                           //  exception  c++...
	if(b!=0){
		c=a/b;
		cout<<c;
	}else{
		throw b;
	}
}
	catch(int e){
		cout<<" not divisable by 0  or  infinite: "<<e;
	}

}