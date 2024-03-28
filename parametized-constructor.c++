#include<iostream>
using  namespace std;
class constr{
	int a,b;
	public:
		constr(int m,int n){               // a is a constuctor....
		a=m;
		b=n;
		}
		void putdata(){
			cout<<" value of a is "<< a <<endl;
			cout<<" value of b is "<< b;
		}
};
int main(){
	constr obj(10,20);
	obj.putdata();
}