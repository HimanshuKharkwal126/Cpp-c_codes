#include<iostream>
#include<string>
using namespace std;
class car{
	public:
		string brand;
		string name;
		int year;
};
int main(){
  car car1;
  car1.brand="maruti";
  car1.name="swift";
  car1.year=2010;
  cout<<"your  car is "<<car1.brand<<" and model "<<car1.name<<" and year"<<car1.year<<endl;  
	
};