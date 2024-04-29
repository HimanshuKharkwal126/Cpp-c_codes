#include<stdio.h>
struct queue{
	int data;
	struct queue *next;
};
struct queue *front=NULL;
struct queue *rear=NULL;

void enqueue(int x){
	struct queue *newnode;
	newnode=(struct queue *)malloc(sizeof(struct queue));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newnode;
	}else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	struct queue *temp;
	temp=front;
	if(front==NULL && rear==NULL){
		printf("queue is empty and underflow condtion::");
	}else{
		front=front->next;
		free(temp);
	}
}
void display(){
	struct queue *temp;
	temp=front;
	while(temp!=NULL){
		printf("\n%d",temp->data);
		temp=temp->next;
	}	
}
void peak(){
	printf("\npeak value is:%d",front->data);
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	display();
	peak();
}