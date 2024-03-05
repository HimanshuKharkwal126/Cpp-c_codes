#include<iostream>
#include<math.h>
using namespace std;
class interest{
	private:
	int p,r,t,n,c_intrst,s_intrst;
	public:
		void getdata(){
		cout<<" enter the rate of interest:";
		cin>>r;
		cout<<" enter the principal amount:";
		cin>>p;
	}
		void putdata(){
		cout<<" compound interest:"<<endl;
		c_intrst=p*pow(1+r,t);
		cout<<"compound intrest is"<<c_intrst<<endl;
	
	}	
};
int main(){
	interest obj;
	obj.getdata();
	obj.putdata();
}