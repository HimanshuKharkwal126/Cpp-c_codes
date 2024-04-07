#include<iostream>
using namespace std;
class check{
private:
int a,i;
public:
int getdata(){
}                  //   {  even or odd  by loop (class) }   C++....
int putdata(){
	for(i=0;i<=20;i++){
		if(i%2==0){
			cout<<i<<" no is even "<<endl;
		}else{
			cout<<i<<" no is odd "<<endl;
		}
	}
}
};
int main(){
	check obj;
	obj.getdata();
	obj.putdata();
	}