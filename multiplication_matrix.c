#include <stdio.h>
                        // 3*3 matrix
int main() {
	int i,j,k;
    int a[3][3],b[3][3],c[3][3],sum;;
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("enter the elements a[%d][%d]:",i,j);
    		scanf("%d",&a[i][j]);
		}
	}
	printf("elements of A matrix:\n");
	 for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("enter the elements b[%d][%d]:",i,j);
    		scanf("%d",&b[i][j]);
}
}
	printf("elements of B matrix:\n");
	 for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d\t",b[i][j]);
    	}
printf("\n");
}
for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		sum=0;
    	for(k=0;k<3;k++){
    		sum=sum+a[i][k]*b[k][j];
    		c[i][j]=sum;
		}
		}
		printf("\n");
	}
		printf("multiplication of A&B matrix: \n");
		for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
}
}
