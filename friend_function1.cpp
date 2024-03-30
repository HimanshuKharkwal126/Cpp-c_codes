#include<iostream>
using namespace std;
class xyz;
class abc{
	private:
	int a;
	friend int ffunction(abc,xyz);
};
	class xyz{             
	private:
	int b;
	friend int ffunction(abc,xyz);
};
int ffunction(abc x,xyz y){
	x.a=5;
	y.b=8;
	return x.a+y.b;
}
int main(){
	abc obj1;
	xyz obj2;
	cout<<ffunction(obj1,obj2);

}




/*

#include<iostream>
using namespace std;
class coding{
	private:
		int a,b,c;
		friend int ffunction(coding);
};                                   // friend function c++...
int ffunction(coding x){
	x.a=20;
	x.b=30;
	x.c=x.a+x.b;
	return x.c;
	
}
int main(){
	coding obj;
	cout<<ffunction(obj);
}


*/