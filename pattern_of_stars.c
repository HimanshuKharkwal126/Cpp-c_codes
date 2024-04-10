#include<stdio.h>
int main(){
	int i,j,k,rows;
	printf("enter the rows :");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}                             //  pattern  C
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
		for(i=rows-1;i>=1;i--){
		for(j=rows-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
}
}

