#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traversing(struct node *first){
	struct node *ptr=first;
	do{
			printf("element is %d\n",ptr->data);
		ptr=ptr->next;
	}
	while(ptr!=first);
}                                                //{   CIRCULAR LINKED LIST traversing....}                      
int main(){
struct node *first,*second,*third,*fourth,*fifth;
first=(struct node *)malloc(sizeof(struct node));
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
fifth->next=first;
traversing(first);
}