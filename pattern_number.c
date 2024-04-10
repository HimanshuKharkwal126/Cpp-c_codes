#include<stdio.h>
int main(){
int	count=1;
int i,j,rows;
	printf("enter the rows\n");
	scanf("%d",&rows);
	for(i=1;i<rows;i++){
	for(j=1;j<=i;j++){
		printf("%d",count);
		count++;
	}
	printf("\n");
	}
}
