#include<stdio.h>
//capital,small case letters,digit,symbols
int main(){
char ch;
printf("enter the carecter");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'){
printf("small case letters");
}else if(ch>='A'&&ch<='Z'){
	printf("capital case letters");
}else if(ch>='0'&&ch<='9'){
	printf("digits");
}else{
	printf("special symbols");
}
}
