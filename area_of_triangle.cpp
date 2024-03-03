#include<iostream>
#include<cmath>
using namespace std;
class triangle{
public:
void print_area(int s1, int s2, int s3){
	double s=(s1+s2+s3)/2.0;
	cout<<s<<endl;
	cout<<"perimeter is:"<<(s1+s2+s3)<<endl;
	double a=s*(s-s1)*(s-s2)*(s-s3);
	double p=pow(a,0.5);
	cout<<"area of triangle is:"<<p;
}	
};
int main(){
	triangle t;
	t.print_area(3,4,5);
}