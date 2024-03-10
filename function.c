#include<stdio.h>
int fact(int);
int fact(int a){
	if (a==1){
		return 1;
	}else{
		return a*fact(a-1);
	}
}
int main(){
	int n,f;
printf("enter the no ");
scanf("%d",&n);
f=fact(n);
printf("%d",f);	
	
	return 0;
}