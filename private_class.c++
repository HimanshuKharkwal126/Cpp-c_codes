#include<iostream>
#include<string>
using namespace std;
class addition{
private:
int a,b,c;
public:
	int getdata(){
		cout<<" enter the 1 no :";
		cin>>a;
		cout<<" enter the 2 no :";
		cin>>b;
		c=a+b;
	}                    // sum  (class) C++.....
	int putdata(){
		cout<<" sum  is "<<c<< endl;
	}
};

	int main(){
		addition obj[5];
		int i,n;
		cout<<" enter no ";
		cin>> n;
		for(i=0;i<n;i++){
			obj[i].getdata();
		
		}for(i=0;i<n;i++){
			obj[i].putdata();
		}
	}