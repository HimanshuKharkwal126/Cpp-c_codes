#include<stdio.h>
int main(){
	char str[]={'h','i','m','a','n','s','h','u','\0'};
	char str2[10]={'h','i','m','a','n','s','h','u','\0'};
	char str3[]="himanshu";
	char str4[10]="himanshu";
	printf("%s\n",str);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("%s\n",str4);
	char str5[10];
	printf("enter the string:");
	fgets(str5);
printf("%10.5s\n",str5);//for taking space before charecter
printf("%.5s\n",str5);//for taking space after charecter
puts(str5);
puts(str5);	
}