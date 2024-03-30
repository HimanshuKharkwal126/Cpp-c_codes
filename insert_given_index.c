#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
void traversing(struct node *ptr){	
	printf("Elements are :\n");
	int count=0;
	while(ptr!=NULL){
		printf("  %d\n",ptr->data);
		ptr=ptr->next;
		count++;
}
printf(" Total no of nodes are:%d",count);
}                                                                 //   { adding data and address at first ....Linked list ....!    }
struct node *insertAtGivenIndex(int data,struct node *first,int index){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p,*q;
    int i=1;
    while(i<index-1){
    	p=first;
    	q=first->next;
    	i++;
	}
	p=ptr->prev;
	ptr->data=data;
    ptr->next=q;
    p->next=ptr;
    q->prev=ptr;
	return ptr;
} 
int main(){
struct node *first;
struct node *second;
struct node *third;
struct node *fourth;
struct node *fifth;

first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
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
fifth->next=NULL;

insertAtGivenIndex(50,first,2);
traversing(first);
}