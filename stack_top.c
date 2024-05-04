#include<stdio.h>
int stack[10],top=-1;
int maxSize=2;
void push(){
	int val;
	if(top==maxSize){
		printf("overflow:");
	}
	else{
		printf("enter the value:");
		scanf("value id=s%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
//void display(){
//	if(top==-1){
//		printf()
//	}
//
//}
int main(){
push();
//display();	
}