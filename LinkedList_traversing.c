#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traversing(struct node * first){
	struct node * ptr;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
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
fifth->next=NULL;
traversing(first);
}