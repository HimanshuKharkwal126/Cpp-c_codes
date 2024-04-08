#include<iostream>
using namespace std;
class A{
	public:         
	void get(){
		cout<<" inside class A"<<endl;
	}                     
};                       //  overwriting.....c++
class B:public A{
	public:
		void get(){
			cout<<" inside class B"<<endl;
		}
};
int main(){
	B bb;
	bb.A::get();
	bb.get();
}