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
		printf("  %d\n",ptr->data);
		ptr=ptr->next;
		count++;
	}}
void search(struct Node *ptr,int key){
int flag;	
	while(ptr!=NULL){
	if(ptr->data==key){
		flag=1;
		break;
	}
		ptr=ptr->next;		
} 
if(flag==1){
printf("key is found");	
}else{
printf(" key is not found" );
}}                                        //  search LINKED LIST .....                                                           	
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
//first=deleteFirst(first);
search(first,15);
traversing(first);
}