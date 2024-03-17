#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
	int isEmpty(struct stack *ptr){
		if(ptr->top==-1){
			return 1;
		}else{
			return 0;
		}
	}
	int isFull(struct stack *ptr){
		if(ptr->top==size-1){
			return 1;
		}else{
			return 0;
		}
	}
};
int main(){
struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size*sizeof(int));
sp->arr[0]=10;
sp->top=sp->top++;
if (isEmptry(sp)==1){
	printf(" stack is empty ");
}else{
	printf(" stack has some values");
}
 
 printf("\n");

if (isFull(sp)==1){
	printf(" stack is full ");
}else{
	printf(" stack has some values");
}
}