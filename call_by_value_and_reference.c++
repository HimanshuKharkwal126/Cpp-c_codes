/*
#include<stdio.h>
int main(){
int x=10;
char y='A';
float z=15.5;
int *ptr1=&x;
char *ptr2=&y;
float *ptr3=&z;
printf("\n%d",sizeof(ptr1));
printf("\n%d",sizeof(ptr2));
printf("\n%d",sizeof(ptr3));
printf("%p",ptr);        // print address
printf("\n%d",*ptr);     // print value at address
printf("\n%p",&x);       // print address
printf("\n%d",*&x);      // print value at address
}
*/



/*
#include<stdio.h>
int main(){
int x=10;
int *ptr=&x;
printf("\n%d",x);
x=x+30;
printf("\n%d",*ptr);
*ptr=*ptr+40;
printf("\n%d",x);
}
*/



/*
#include<stdio.h>
void fun(int x){
	x=x+5;
}                            //  call by value 
int main(){
int x=10;
fun(x);
printf("%d",x);
}
*/



/*
#include<stdio.h>
void fun(int *x){
	*x=*x+5;
}                            //  call by reference 
int main(){
int x=10;
fun(&x);
printf("%d",x);
}
*/


#include<stdio.h>
//void fun(int *x){
	void fun(int arr[],int n){
		int i;
	//	int s=sizeof(arr)/sizeof(arr[0]);
		printf("inside the function:\n");
	//	for(i=0;i<s;i++){
	    for(i=0;i<n;i++){
			printf("\n%d",arr[i]);
		}
	
}
int main(){
	int i;
	int arr[]={10,20,30,40,50};
/*	printf("\n%x",arr);      // address of first element
	printf("\n%x",arr+1);    // address of second element
	printf("\n%x",arr+2);    // address of third element
	printf("\n%x",arr+3);     */
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		printf("\n%d",arr[i]);		
	}
	fun(arr,n);
}


