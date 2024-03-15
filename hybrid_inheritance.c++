#include<iostream>
using namespace std;
class A{
	public:
		void printa(){
			cout<<" inside class A"<<endl;	
		}
};
class B:public A{
	public:
		void printb(){
		cout<<" inside class B"<<endl;	
		}
};                                  //          {     HYBRID INHERITANCE   C++.....!    }
class C{
	public:
		void printc(){
		cout<<" inside class C"<<endl;	
		}
};
class D:public B,public C{
	public:
		void printd(){
			cout<<" inside class D"<<endl;
		}
};
int main(){
D dd;
dd.printa();
dd.printb();
dd.printc(); 
dd.printd();	
}