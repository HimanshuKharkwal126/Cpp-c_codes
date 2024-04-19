#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char name[]="himanshu";
	for(i=strlen(name);i>=0;i--){
		printf("%c",name[i]);
	}
}