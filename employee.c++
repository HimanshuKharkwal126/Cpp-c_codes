#include<iostream>
#include<string>
using namespace std;
class employ{
	private:
	string name;
		int age;
		public:
			void getdata(){
				cout<<" enter the name:";
				cin>>name;
				cout<<" enter the age:";
				cin>>age;	
			}                                    //  EMPLOYEE  INFORMATION ....C++.....
			void putdata(){
				cout<<" emp name is:"<<name;
				cout<<endl<<" emp name is:"<<age;
			}
};
const int size=3;
int main(){
	int i;
	employ manager[size];
	for(int i=0;i<size;i++){
		cout<<endl<<"Details of manager:"<<endl;
		manager[i].getdata();
	}
	cout<<endl;
		for(i=0;i<size;i++){
			cout<<endl<<" Manager "<<i+1<<endl;
			manager[i].putdata();
		}
	}