#include<stdio.h>
int checkprime(int i, int num);
int checkprime(int i, int num){

	if(num==i){
		return 0;
	}
	else{
		if (num%i==0){
			return 1;
		}
			else{
			
		return checkprime(i+1,num);
}
}
}

int main(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	if (checkprime(2,num)==0){
		
		printf("Given number is prime no:");
}else
		{
				
	
		printf("Given number is not a prime no:") ;
	}
}