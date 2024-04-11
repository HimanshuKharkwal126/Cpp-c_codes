#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j,count;
	for (i=1;i<=100;i++){
		count=0;             // hme bar bar count ki value 0 krni h to tbhi loop k andr count ki value 0 ki h!
		for(j=1;j<=i;j++){
		if(i%j==0){
			count++;
			                //   {prime no between 1 to 1oo c++  }
		} 
		}	
		if(count==2){       //value sirf 2 hi bar devide honi chahie !
			cout<<i<<" is a prime no "<<endl;
		}	
	}

}