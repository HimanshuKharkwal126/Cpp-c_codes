#include<stdio.h>
int main(){
	int rev=0,num,r,org_no;
	printf("enter the number");
	scanf("%d",&num);
		org_no=num;
	while(num!=0){
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
if(org_no==rev){
printf("no is palindrome");
}else{
	printf("not a palindrome");
}
}