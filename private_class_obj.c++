#include<iostream>
#include<string>
using namespace std;
class add{
	private:
		int a,b;
		public:
			void info (){
				cout<<"enter the first no: "<<endl;
				cin>>a;
				cout<<"enter the scond no:"<<endl;
				cin>>b;
				cout<<"sum is"<<a+b;
			}
};
int main(){
	add s1;
	s1.info();
}