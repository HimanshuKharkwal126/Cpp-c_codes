#include<stdio.h>
#include<string.h>
int main(){
	//for finding length
	char name[]="himanshu";
	printf("%s",strlen(name));
	//for copying
	
	char fname[]="himanshu";
	char lname[20];
	strcpy(lname,fname);
	printf("%s",lname);
	//for concatination
	
	
	char fname[]="himanshu";
	char lname[20]="kharkwal";
	strcat(fname,lname);
	printf("%s",fname);
	//for comparing
	
	char a[10];
	printf("enter the string");
	gets(a);
	char b[10];
	printf("enter the string");
	gets(b);
	int c=strcmp(a,b);
	if(c==0){
		printf("equal");
		}else{
		printf("not equal");
	}
}