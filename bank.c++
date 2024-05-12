#include<iostream>
#include<string>
using namespace std;
class bankac{
	private:
		string name;
		int ac_no;
		string ac_type;
		float bank_amo;
		int value,given_amo,acc_no,pay_amount,pay_type,ammount,depo,withdrwl;
	public:
		void getdata(){
		cout<<" enter the account holder name:";
		cin>>name;	
	}
	void putdata(){
		cout<<" enter the account no:";
		cin>>acc_no;
		cout<<" add ammout:";
		cin>>given_amo;
		if(given_amo<500){
			cout<<" please add minimum 500 rs:"<<endl;
		}else if(given_amo>=500){
			cout<<" welcome to your account:"<<endl;
		
	cout<<" select your payment type:";
	cin>>pay_type;
	cout<<" enter the amount:";
	cin>>pay_amount;
}
	if(pay_amount==depo){
		cout<<" enter the ammount:";
		cin>>ammount;
		cout<<"deposie ammount is"<<depo<<endl;
	}else if(pay_amount==withdrwl){
		cout<<" enter the ammount: ";
		cin>>ammount;
		cout<<"withdrawal ammount is "<<withdrwl<<endl;
		if(ammount>given_amo){
			cout<<" insufficiennt balance:"<<endl;
		}else if(ammount<given_amo){
			cout<<" you have successfully withdrawal"<<ammount<<endl;
		}
	}
}		
};
int main(){
	bankac obj;
	obj.getdata();
	obj.putdata();
}