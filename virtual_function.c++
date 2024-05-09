//                 virtualfunction : run time polymorphism

#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){
			cout<<"\n parent class:";
		}
};
class B:public A{
	public:
		void show(){
			cout<<"\n child class:";
		}
};
int main(){
	A *ptr;
	B aa;
	ptr=&aa;
	ptr->show();
}
