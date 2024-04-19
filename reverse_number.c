#include<stdio.h>
int main(){
int n,a;
long int revnum=0;
	printf("enter the 5 digit number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	revnum=revnum+a*10000L;
	a=n%10;
	n=n/10;
	revnum=revnum+a*1000;
	a=n%10;
	n=n/10;
	revnum=revnum+a*100;
	a=n%10;
	n=n/10;
	revnum=revnum+a*10;
	a=n%10;
	n=n/10;
	revnum=revnum+a*1;
	printf("reverse of the num=%d",revnum);
}