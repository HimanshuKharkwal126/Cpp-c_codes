#include<stdio.h>
int main(){
float s1,s2,s3,s4,per;
printf("enter the marks of s1");
scanf("%f",&s1);
printf("enter the marks of s2");
scanf("%f",&s2);
printf("enter the marks of s3");
scanf("%f",&s3);
printf("enter the marks of s4");
scanf("%f",&s4);
per=(s1+s2+s3+s4)*100/500;
if(per>=80&&per<=90)
printf("grade A");
else if(per>=70&&per<=80)
printf("grade B");
else if(per>=60&&per<=70)
printf("grade C");
else
printf("grade D");
}
