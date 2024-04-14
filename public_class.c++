#include<iostream>
#include<string>
using namespace std;
class coding{	
public:             //public class c++
string sname;
float marks;
string gender;
};
int main(){
	coding manas,harsh;
	manas.sname="sety";
	manas.marks=87.90;
	manas.gender="male";
	harsh.sname="joshi";
	harsh.marks=89.99;
	harsh.gender="male";
	cout<<" Manas "<< manas.sname <<" has got "<< manas.marks <<" percentage marks and his gender is "<< manas.gender<<endl;
	cout<<" Harsh "<< harsh.sname <<" has got "<< harsh.marks <<" percentage marks and his gender is "<< harsh.gender;
}