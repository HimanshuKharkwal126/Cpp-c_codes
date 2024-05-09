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
};
class C:public A{
	public:
		void printc(){
		cout<<" inside class C"<<endl;	
		}
};
int main(){
B bb;
C cc;
bb.printa();
bb.printb();
cc.printa();
cc.printc();
	
}