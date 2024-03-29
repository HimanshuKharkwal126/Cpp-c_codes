#include<iostream>
using namespace std;
class divyanshu{
int a,b,c;                            //  object
int bhupesh(){                        // function
cout<<" enter the number ";
cin>>a;
cout<<" enter the number ";
cin>>b;
c=a+b;
return c;
}
friend int himanshu(divyanshu);      //himanshu freind fun!    divyanshu = class
};
int himanshu(divyanshu p){
p.bhupesh();
}
int main(){
	divyanshu obj;
	cout<<himanshu(obj);
}