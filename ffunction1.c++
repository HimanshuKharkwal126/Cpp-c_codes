#include<iostream>
using namespace std;
class rahul;
class bhuppi{
	private:
	int x;
  friend void ffunction(rahul,bhuppi);
};
class rahul{
	public:
	  	int y;
	friend void ffunction(rahul,bhuppi);
};
int ffunction(bhuppi aa,rahul cc);
if(aa.x>bb.y){
	cout<<" x is greater:";
}else{
	cout<<" y is greater:";
}
int main(){
	rahul obj1;
	bhuppi obj2;
	func(obj);
}


