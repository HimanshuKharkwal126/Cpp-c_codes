#include<stdio.h>
int main(){
	FILE *fp;
	char buff[255];
	fp = fopen("kuch bhi.txt.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF){
		printf("%s",buff);
	}
	fclose(fp);
}