#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
//void traversing(struct node *ptr){                                    // traversing = visit karna
//	while(ptr!=NULL){
//		printf("\nelement is %d",ptr->data);
//		ptr=ptr->next;
//	}                              
//}

void search(struct node *ptr){
		int value,found=0;                                         
	printf("enter the value you want to search:");
	scanf("%d",&value);
	while(ptr!=NULL){                                      // jab tak ptr ki value NULL nahi ho jati
		if(ptr->data==value){                              // agr hamare data me se koi value user se di hui value ke barabar ho
			found=1;                                       // found ki value 1 kar do
		} 
		ptr=ptr->next;                                     // ptr ki value ko ptr ke next me move kar do
	}
	if(found==1){                                          // agar found ki value 1 ho to print kro element 
		printf("element found:");
	}else{
		printf("element not found:");                      // nahi to element not found print karo
	}
}
int main(){ 
	struct node *first,*second,*third,*fourth,*fifth;                // variable banana
	
	first=(struct node *)malloc(sizeof(struct node));                // memory allocate karna
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	fifth=(struct node *)malloc(sizeof(struct node));

	first->data=10;
	first->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=fifth;
	
	fifth->data=55;
	fifth->next=NULL;
	
	search(first);
//	traversing(second);
}