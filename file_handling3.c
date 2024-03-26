#include<stdio.h>
main(){
	FILE *fp;
	fp = fopen("himanshu.txt","w");
	fprintf(fp,"hello himanshu...\n");
	fclose(fp);
	
}