#include<iostream>
using  namespace std;
class constr{
	int a,b;
	public:
		constr(int m,int n){               // a is a constuctor....
		a=m;
		b=n;
		}                             //    {   parameter type constructor....}
		void putdata(){
			cout<<" value of a is "<< a <<endl;
			cout<<" value of b is "<< b;
		}
};
int main(){
	int x,y;
	cout<<" enter the values:";        // taking values from user..
	cin>>x>>y;
	constr obj(x,y);
	obj.putdata();
}