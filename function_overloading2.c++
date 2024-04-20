#include<iostream>
using namespace std;
void add(int a,int b){
cout<<a<<" is a integer value "<<endl;
cout<<b<<" is a integer value ";
}
void add(int a,float b){
cout<<a<<" is a integer ";
cout<<b<<" is a float value ";
}                         //   { function overloading  C++ .....}
void add(int a,int b,int c){
cout<<a<<b<<c;	
}
int main(){
add(2,0);
}
