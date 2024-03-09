#include<stdio.h>
int main(){
	int i,p,fact=1,num,count=0;
	while(1){
	printf("\nenter the operation:\n");
		printf("enter 1 for factorial:\n");
			printf("enter 2 for prime:\n");
				printf("enter 3 for odd even:\n");
					printf("enter 4 for exit:\n");
	scanf("%d",&p);
	switch(p){
		case 1:
		printf("\nenter the no:");
		scanf("%d",&num);
		for(i=1;i<=num;i++){
			fact=fact*i;		
	}
		printf("factorial value is %d",fact);	
		break;
			case 2:
		printf("enter the no");
		scanf("%d",&num);
		for(i=1;i<=num;i++){
			if(num%i==0){
			count++;
		}
		}
		if(count==2){
			printf("num is prime no");
		}else{
			printf("not a prime no:");
		}break;
		
		case 3:
		printf("enter the integer");
		scanf("%d",&num);
		if(num%2==0){
			printf("%d is even",num);
		}else{
			printf("%d is odd",num);
			break;
				default:
					
					exit(0);
		}
}}}
