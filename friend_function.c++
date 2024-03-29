
#include<iostream>
using namespace std;
class coding{
	private:
		int a,b;
		void test(){
			cout<<" enter the value:";
			cin>>a>>b;
			cout<<a+b;
		}                 // friend function C++ ....
		friend void ffunction(coding);
};
void ffunction(coding x){
	x.test();
		
	}
int main(){
	coding obj;
	ffunction(obj);
}