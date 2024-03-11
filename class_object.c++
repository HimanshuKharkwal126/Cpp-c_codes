#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int x){
		a=x;	
		}
		void display(){
			cout<<" value of A is : "<<a<<endl;
		}
};
class B{
	int b;
	public:
		B(int y){
			b=y;
		}
		void output(){
			cout<<" value of B is : "<<b<<endl;
		}
};
class C:public A,public B{
	int c;
	public:
		C(int p,int q,int r):A(p),B(q){
			c=r;
		}
		void putdata(){
			cout<<" value of C is : "<<c<<endl;	
		}
};
int main(){
	C cc(10,20,30);
	cc.display();
	cc.output();
	cc.putdata();
}