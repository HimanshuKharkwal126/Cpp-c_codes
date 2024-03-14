#include<stdio.h>
int main(){
int bs,hra,da,gs;
printf("enter the basic salary");
scanf("%d",&bs);
da=bs*.40;
hra=bs*.20;
gs=bs+da+hra;
printf("basic salary is %d\n",bs);
printf("dearness allowance is %d\n",da);
printf("house rent allowance is %d\n",hra);
printf("gross salary is %d\n",gs);
return 0;
}