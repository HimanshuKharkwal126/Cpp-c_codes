#include<iostream>
using namespace std;
class coding{
	public:
	coding(){        //constructor
		cout<<"creating memory"<<endl;
		
	}
	~coding(){      //distructor - programme k last m chlega
		cout<<"free memory"<<endl;
	}
};
int main(){
	coding obj;
	return 0;
}
