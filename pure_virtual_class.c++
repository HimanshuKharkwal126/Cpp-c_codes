//               Pure virtual function : Data hiding

#include<iostream>
using namespace std;
class bank{
	public:
		float a,interest,total_balance;
		int account_num;
		virtual void calculate_interest(float balance)=0;
		
		void show(int a){
			account_num=a;
			cout<<"your account number is:"<<account_num<<endl;
		}
};
class SBI:public bank{
	public:
		void calculate_interest(float balance){
			a=balance;
			interest=a*5*1/100;
			total_balance=a+interest;
			cout<<"your interest is:"<<interest<<endl;
			cout<<"your total balance is:"<<total_balance<<endl;
		}
};
int main(){
	SBI obj;
	obj.show(100);
	obj.calculate_interest(1000);
}