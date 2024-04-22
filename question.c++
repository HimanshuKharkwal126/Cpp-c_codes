//                     16/June/2023
/*
#include<iostream>
using namespace std;
int main(){
	cout<<"enter any number:";
	int n1;
	cin>>n1;
	cout<<"entered no is:"<<n1;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"enter first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	cout<<"sum of two number is:"<<n1+n2;
}
*/


/*
#include<iostream>
using namespace std;                   // memeber function
class addition{                        // member variable
	int a,b;
public:
	void getdata(){
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;
	}
	void putdata(){
		cout<<"Addition of two number is:"<<a+b;
	}
	};
int main(){
	addition aa;
	aa.getdata();
	aa.putdata();
}
*/


//   17/JUNE/2023


/*

#include<iostream>
using namespace std;
class demo{
int n;
public:
	void getdata(){
	cout<<"enter the number:";
	cin>>n;		
	}
	void putdata(){
	cout<<n;
	}                                       // ARRAY..
};
int main(){
demo dd[5];
int i;
for(i=0;i<5;i++){
    dd[i].getdata();
}
for(i=0;i<5;i++){
	dd[i].putdata();
}
}

*/


/*
#include<iostream>
#include<cmath>
using namespace std;
class triangle{
public:
void print_area(int s1, int s2, int s3){
	double s=(s1+s2+s3)/2.0;
	cout<<s<<endl;                                    // area and perimeter
	cout<<"perimeter is:"<<(s1+s2+s3)<<endl;
	double a=s*(s-s1)*(s-s2)*(s-s3);
	double p=pow(a,0.5);
	cout<<"area is"<<p;
}	
};
int main(){
	triangle t;
	t.print_area(3,4,5);
}

*/

