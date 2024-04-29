#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;	
};
void traversing(struct Node *ptr){	
	printf("\nElements are :\n");
	int count=0;
	while(ptr!=NULL){
		printf(" %d\n",ptr->data);
		ptr=ptr->next;
		count++;
	}
	}                              //      SUM of elements LINKED LIST...                                                      	
int sum(struct Node *ptr){
	int sum=0;
	while(ptr!=NULL){
		sum=sum+ptr->data;
		ptr=ptr->next;
	}
	return sum;
}
int main(){
struct Node *first,*second,*third,*fourth;
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
first->data=7;
first->next=second;
second->data=45;
second->next=third;
third->data=67;
third->next=fourth;
fourth->data=55;
fourth->next=NULL;
printf("%d",sum(first));
/*sum(first);
traversing(first);*/
}