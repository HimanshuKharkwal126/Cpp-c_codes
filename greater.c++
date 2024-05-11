#include<iostream>
using namespace std;
class check{
private:
int a;
int b;
public:
int getdata(){
cout<<" enter the first no:";
cin>>a;
cout<<" enter the second no:";
cin>>b;
}                  //   {  greater no:  }   C++....
int greater(){
	if(a>b){
		cout<<" a is greater";
	}else{
		cout<<" b is greater";
	}	
}
};
int main(){
	check obj;
	obj.getdata();
	obj.greater();
	}