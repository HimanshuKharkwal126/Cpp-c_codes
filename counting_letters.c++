#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,count=0;
	char c;
	cout<<"enter the variable: ";
	cin>>c;
  string str="hello i am doing c programming";
                //for counting the number of letter in string
for(i=0;i<=str.size();i++){
	if(str[i]==c){
		count++;
	}
}
cout<<count;
}