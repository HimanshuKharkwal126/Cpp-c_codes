#include<stdio.h>
int main(){
int i,j,rows;
	printf("enter the rows\n");
	scanf("%d",&rows);
	for(i=65;i<65+rows;i++){
	for(j=65;j<=i;j++){
		printf("%c",i);
	}
	printf("\n");
	}
}
