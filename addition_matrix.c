#include<stdio.h>
int main(){
int a[3][3],b[3][3],sum[3][3],i,j;
printf("enter the element in matrix 1");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d%d",&a[i][j]);
printf("enter the element in matrix 2");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d%d",&b[i][j]);
printf("addition of matrix");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
sum[i][j]=a[i][j]+b[i][j];
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
printf("addition of matrix=%d",sum[i][j]);	
}
