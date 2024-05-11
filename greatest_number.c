#include<stdio.h>
int main(){
float a ,b ,c;
printf("enter the value of a,b and c ");
scanf("%f,%F,%f",&a,&b,&c);
if(a>b&&a>c){
	print("A value %F is largest",a);
}else if(b>a&&b>c){
	printf("B value %f is largest",b);
}else{
	printf("c is %d  isrgest ",c);
}
}