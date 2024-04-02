#include<iostream>
using namespace std;
int queue[10],n=10,front=-1,rear=-1;
void insert(){
	int val;
	if(rear==n-1){
		cout<<"queue is full:";
	}else{
			front=0;
			cout<<"Insert the element in queue:";
			cin>>val;
			rear++;
			queue[rear]=val;
		
		}
	}
void deleted(){
	if(front==-1||front>rear){
		cout<<"queue underflow:";
	}else{
		cout<<"element dleted from queqe:";
		front ++;
	}
}
void display(){
	if(front==-1){
		cout<<"queue is empty:";
	}else{
	for(int i=front;i<=rear;i++){
		cout<<queue[i]<<" "<<endl;
	}
	}
}
int main(){
int ch;

char ch='y';
while(ch=='y'){
	
cout<<"1 )press for insertion"<<endl;	
cout<<"2 )press for deletion"<<endl;	
cout<<"3 )press for display"<<endl;
cout<<"4 )press for exit"<<endl;
do{
	cout<<" enter your choice:"<<endl;
	cin>>ch;
	switch(ch){
		
		case 1:insert();
		break;
		case 2:deleted();
		break;
		case 3:display();
		break;
		case 4:cout<<"exit:"<<endl;
		break;
		default:cout<<"enter valid choice:";
}	
}
}
}