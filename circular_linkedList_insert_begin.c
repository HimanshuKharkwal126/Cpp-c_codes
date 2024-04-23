#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traversing(struct node *first){
	struct node *p=first;
	do{
		printf("element is %d\n",p->data);
		p=p->next;
	}
	while(p!=first);
}                                           //  { CIRCULAR LINKEDF LIST insert at first....}
struct node *insertAtStart(int data,struct node *first){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=first->next;
	while(p->next!=first){
	p=p->next;	
	}
	p->next=ptr;
    ptr->next=first;
    first=ptr;
	return first; 
}
int main(){
struct node *first,*second,*third,*fourth,*fifth;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct nde*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));
first->data=5;
first->next=second;
second->data=10;
second->next=third;
third->data=15;
third->next=fourth;
fourth->data=20;
fourth->next=fifth;
fifth->data=25;
fifth->next=first;
printf("before insertion at circular linked list elements are:\n");
traversing(first);
printf("after insertion at circular linked list elements are:\n");
first=insertAtStart(50,first);
traversing(first);
}