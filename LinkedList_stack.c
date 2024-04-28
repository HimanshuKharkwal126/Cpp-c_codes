#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int x){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;                
	newnode->next=top;
	top=newnode;
}

void pop(){
struct node *temp;
	if(top==NULL){
		printf("\nUNDERFLOW condition:Sack is Empty!");
	}else{
		temp=top;
		top=top->next;
		free(temp);
//		printf("\npoped element is %d",top->data);
	}
}

void display(){
	struct node *temp;
	temp=top;
	if(temp==NULL){
		printf("Stack is Empty:");
	}else{
		while(temp!=NULL){
			printf("\nElement is:%d",temp->data);
			temp=temp->next;
		}
	}
}
void peak(){
	if(top==NULL){
		printf("stack is empty:");
	}
	printf("\n Peak element is %d",top->data);
}
void count(){
	int count=0;
	struct node *temp=top;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	printf("%d",count);
}
int main(){
	push(10);
	push(20);
	push(30);
	pop();
	push(40);
	pop();
	push(50);
	peak();
	display();
}