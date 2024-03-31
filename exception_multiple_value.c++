#include<iostream>
using namespace std;
int main(){
	int a,b,n;
	cout<<" enter the no:";
	cin>>a;
	try{
		if(a==0){
			throw a;
		}else if(a==100){
		throw '100';	
		}else if(a==1000){
			throw 15.5;
		}
	}     
	/*                          //  EXCEPTION OF MULTIPLE VALUES  C++
	catch(int e){
		cout<<" value is integer."<<e;
	} 
	catch(char e){
		cout<<" value is charecter."<<e;
	}
	catch(double e){
		cout<<" value is double."<<e;
	}
}                                           OR                               */


catch(...){
	cout<<" some exception occured";
}
}