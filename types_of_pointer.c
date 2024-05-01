                                                    // Types of pointer
/*                                                    
                                                    
1- NULL pointer                  // assign NULL value to pointer
2- Void pointer                  // typecasting is important
3- Wild pointer                  // there is no value assign to pointer        
4- Dangling pointer              // 

*/

#include<stdio.h>
int main(){
	int i;
	char alpha='c';
	void *ptr;               // void pointer
	ptr=&alpha;
	printf("%c",*(char *)ptr);
	
	
	int num=20;
	int *ptr1;              // wild pointer
	int *ptr2=NULL;         // NULL pointer
	
	
	ptr1=(int *)calloc(5,4);                 //5 block ka array banega 
	for(i=0;i<5;i++){
		ptr1[i]=20;
	}
	

	for(i=0;i<5;i++){
		printf("\n value of ptr1 is:%d",ptr1[i]);
		printf("\n address of ptr1 is:%d",&ptr1[i]);
	}
}