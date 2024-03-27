#include<iostream>
#include<string>
using namespace std;
class coding{
	int a;
	string b;
	public:         
	coding(){            // constructor
		a=5;
		cout<<"value of a is: "<<a;
		
	}
		coding(int x,string y){
		a=x;
		b=y;
		cout<<"value of a is: "<<a<<endl<<"value of b is: "<< b<<endl;		
		cout<<"value of a and b is: "<<a<<" , " <<b<<endl;		
		}
};
int main(){
	coding obj();
	coding obj1(2,"pankaj");
}