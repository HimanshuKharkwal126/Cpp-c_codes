#include<iostream>
using namespace std;
/*
void myfunction(){
	cout<<"hello world";;
}                           {//printing hello world}
  int main(){
myfunction();	
}
*/


void myfunction(string name,int rollno){
	cout<<"your name is "<<name<<" and "<<" rollno is "<<rollno<<"\n";
}                      //printing argument and parameter in function
int main(){            //or printing name and roll no       
	myfunction("himanshu",15);
	myfunction("saurav",35);
	myfunction("rahul",30);

} 

