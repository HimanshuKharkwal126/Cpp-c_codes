 #include<iostream>
using namespace std;
class number{
int a,n;  
void bhupesh(){
	cout<<" enter the no ";
	cin>> n;
	if ( n%2==0){
		cout<<" no is even ";
	}else{
		cout<<" no is odd ";
	}                                //   { even of friend function....!  }
}
friend int himanshu(number);     
};
int himanshu(number p){
p.bhupesh();
}
int main(){
	number obj;
	himanshu(obj);
}
