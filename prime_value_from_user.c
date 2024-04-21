#include<stdio.h>
int primeno(int a);
int primeno(int a){
	int i,count=0;
	for(i=1;i<=a;i++){
		if(a%i==0){
		count++;
	}
}return count;	
}
int main(){
	int t;
	printf("enter the number");
	scanf("%d",&t);
	if(t==2){
		printf("the no is prime no:");
	}else{
		printf("the no is not a prime no:");
	}
}
