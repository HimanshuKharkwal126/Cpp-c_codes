#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;	
};
void traversing(struct Node *ptr){	
	printf("Elements are :\n");
	int count=0;
	while(ptr!=NULL){
		printf("  %d\n",ptr->data);
		ptr=ptr->next;
		count++;
}
printf(" Total no of nodes are:%d",count);
}                                                                 //   { adding data and address at given index ....Linked list ....!    }	
struct Node *insertAtIndex(int data,struct Node *head,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
    int i=0;
    while(i!=index-1){
    	p=p->next;
    	i++;
	}
	ptr->next=p->next;
	ptr->data=data;
	p->next=ptr;
	return head;
} 
int main(){
struct Node *head,*second,*third,*fourth;
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
insertAtIndex(50,head,2);
traversing(head);
}