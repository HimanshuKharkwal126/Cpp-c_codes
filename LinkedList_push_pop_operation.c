#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
struct node * head=NULL;
void push(int val){
	struct node *newNode=malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=head;
	head=newNode;
	
}
void pop(){
struct node *temp;
if(head==NULL){
	printf("stack is underflow");
}else{
	printf("poped element is %d\n",head->data);
	temp=head;
	head=head->next;
	free(temp);
}
}
int main(){
push(10);
pop();
}
