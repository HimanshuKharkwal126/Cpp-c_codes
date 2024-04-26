#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;	
};
//void countNode(struct node *head){
//	int count=0;
//	struct node *temp=head;
//	while(temp!=NULL){
//		temp=temp->next;
//		count++;
//	printf("Total nodes are %d",count);
//}
//
void searching(struct node *ptr){
	int value,found=0;
	printf("enter the value you want to search:");
	scanf("%d",&value);
	while(ptr!=NULL){
		if(ptr->data==value){
			found=1;
		}
		ptr=ptr->next;
	}
	if(found==0){
		printf("element found:");
	}else{
		printf("element not found:");
	}
}

void traversing(struct Node *ptr){
	while(ptr!=NULL){
		printf(" element is %d\n",ptr->data);
		ptr=ptr->next;
	}
}                                        //   { Linked list ....!    }
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

head->data=7;
head->next=second;

second->data=45;
second->next=third;

third->data=67;
third->next=fourth;

fourth->data=55;
fourth->next=NULL;
countNode(head);
searching(head);
//traversing(head);
}