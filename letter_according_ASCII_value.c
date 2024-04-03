#include<stdio.h>
//letter according to ASCII value
int main(){
char a;
printf("enter the carecter");
scanf("%C",&a);
int b=a;
if (b>=65 && b<=90){
	printf("capital case letters");
}else if(b>=97 && b<=122){
	printf("small case");
}else if(b>=48 && b<=57){
	printf("digits");
}else{
	printf("special symbols");
}
}