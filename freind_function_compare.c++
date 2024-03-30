#include<iostream>
using namespace std;
class compare{
	int a,b;                      //  private variable
	void getvalue(){              // private function
		cout<<" enter the value:";
		cin>>a;
		cout<<" enter the value:";
		cin>>b;
	}
	friend void func(compare);
};                                //   {   comparing...   }
void func(compare x){
	x.getvalue();
	if(x.a>x.b){
		cout<<" A is greater ";
	}else{
		cout<<" B is greater ";
	}
}
int main(){
compare obj;             
func(obj);	
}