#include<iostream>
using namespace std;
int stack[10],n=10,top=-1,i;
void push(int val){
	if(top>=n-1){
		cout<<"stack overflow:";
	}else{
		top++;
		stack[top]=val;
	}
}
void pop(){
	if(top==-1){
		cout<<"stack underflow:"<<endl;
	}else{
		cout<<"popped value is:"<<stack[top]<<endl;
		top--;
	}
}
void display(){
	int i;
	if(top>=0){
		cout<<"stack element is:";
		for(i=top;i>=0;i--){
			cout<<stack[i]<<endl;
		}
		}else{
			cout<<"stack is empty:";	
		}
	}
int main(){
	
int ch,val;
cout<<"press 1 for push:"<<endl;
cout<<"press 2 for pop:"<<endl;
cout<<"press 3 for display:"<<endl;
cout<<"press 4 for exit:"<<endl;
do{
	cout<<"enter the choice:"<<endl;
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"enter the value to be pushed:";
			cin>>val;
			push(val);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			cout<<"exit"<<endl;
			break;
		}default:
		cout<<"enter the valid choice:";
		}		
}
while(ch!=4);
}





