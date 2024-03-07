#include<iostream>
using namespace std;
class check{
private:
int a;

public:
int getdata(){
cout<<" enter the no:";
cin>>a;
}                  //   {  even or odd  (class)  }   C++....
int putdata(){
	if(a%2==0){
		cout<<" no is even";
	}else{
		cout<<" no is odd";
	}	
}
};
int main(){
	check obj;
	obj.getdata();
	obj.putdata();
	}