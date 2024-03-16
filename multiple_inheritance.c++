#include<iostream>
using namespace std;
class A{
	protected:
	int x;
	public:
	void geta(){
	cout<<" enter the no:";
	cin>>x;
}
};                               
class B{
	protected:
int y;
public:
	void getb(){
		cout<<" enter the no:";
		cin>>y;
	}
	
};
class C:public A,public B{
	protected:
		int c;
	public:
	
		void putc(){
			c=x+y;
			cout<<" addition is :"<<c;
		}
};
int main(){
	C aa;
	aa.geta();
	aa.getb();
	aa.putc();
}
