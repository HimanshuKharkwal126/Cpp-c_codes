#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public:
		void getdata(int x,int y){
			a=x;
			b=y;
		}
		void showdata(){
			cout<<a<<endl;
			cout<<b<<endl;
		}                            //  {   FUNCTION OVERLOADING ......!  }
		complex operator +( complex obj){
			complex temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return (temp);
		}
};
int main(){
	complex t1,t2,t3;
	t1.getdata(1,7);
	t2.getdata(2,9);
	t3=t1.operator +(t2);
	t3.showdata();
}