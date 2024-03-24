#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
		void getdata(){
		cout<<" enter the value:";
		cin>>x>>y;
	z++;
		}
		void putdata(){
		cout<<" value of x is: "<<x<<" value of y is: "<<y;
		cout<<" static value is: "<< z;
	}
};
int demo::z;
int main(){
	demo aa,bb;
	aa.getdata();
	bb.getdata();
	aa.putdata();
	aa.putdata();
	
}