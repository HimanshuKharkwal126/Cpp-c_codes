#include<iostream>
using namespace std;
class reverse{
private:
	int a,n,i,r=0;
	public:
		int getdata(){
			cout<<" enter the no:";
			cin>>n;
		}                          //     {  reverse of a num   C++....   }
		int putdata(){
			while(n!=0){
			
			a=n%10;
        	n=n/10;
        	r=r*10+a;
   }
   cout<<" reverse of a num is "<<r;
		}
};
int main(){
	reverse obj;
	obj.getdata();
	obj.putdata();
	
}
