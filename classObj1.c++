#include<iostream>
#include<string>
using namespace std;
class car{
	private:
		string brand;
		string name;
		int year;
		public:
			void info(){
				cout<<"enter brand name:";
				cin>>brand;
				cout<<"enter model name:";
				cin>>name;
cout<<"enter manufacturing Year:";
cin>>year;
}
void result(){
	cout<<"your brand name is:"<<brand<<endl;
cout<<"your model name is:"<<name<<endl;
}			
};
int main(){
  car car1,car2;
  car1.info();11111
  car1.result();
  car2.result();

};