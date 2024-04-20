#include<stdio.h>
int average(int [],int);
int main(){
	int marks[]={85,75,96,74,65};
	int size=sizeof(marks)/sizeof(marks[0]);
	printf("%d\n",average(marks,size));
	printf("%d\n",marks);
	printf("%d\n",&marks);
	printf("%d\n",&marks[1]+2);	
}
int average(int marks[],int s){
	int sum=0,ag,i;
	for(i=0;i<s;i++){
		sum=sum+marks[i];
	}
	ag=sum/s;
	return ag;
}