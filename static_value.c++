#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
		void getdata(){
		cout<<" enter the value:";
		cin>>x;
		cout<<" enter the value:";
		cin>>y;	
		}
		void putdata(){
		cout<<x<<y;
		cout<<" static value is "<< z;
	}
};
int main(){
	demo aa,bb;
	aa.getdata();
	bb.getdata();
	aa.putdata();
	aa.putdata();
	
}