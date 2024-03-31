#include<stdio.h>  
enum months{jan=1, feb, march, april, may, june, july, august, september, october, november, december};  
int main()  
{  
// printing the values of months  
int i;
 for(i=jan;i<=december;i++)  
 {  
 printf("%c\n",i);  
 }  
    return 0;  
}  