#include <stdio.h>

int main() {
    /*int x1,x2,x3,y1,y2,y3,m1,m2,m3;
    printf("enter the of x1: ");
    scanf("%d",&x1);
        printf("enter the of x2: ");
    scanf("%d",&x2);
        printf("enter the of x3: ");
    scanf("%d",&x3);
        printf("enter the of y1: ");
    scanf("%d",&y1);
        printf("enter the of y2: ");
    scanf("%d",&y2);
        printf("enter the of y3: ");
    scanf("%d",&y3);
    m1=(x2-x1)/(y2-y1);
    m2=(x3-x2)/(y3-y2);
    m3=(x3-x1)/(y3-y1);
    if(m1==m2&&m2==m3&&m1==m3){
    	printf("the points are collinear");	
		}
		else{
			printf("the points are not collinear");		}
    
    

}*/
int a,b,x,y,r,h,k;
printf("enter the value of x: ");
scanf("%d",&x);
printf("enter the value of y: ");
scanf("%d",&y);
printf("enter the value of r: ");
scanf("%d",&r);
printf("enter the value of h: ");
scanf("%d",&h);
printf("enter the value of k: ");
scanf("%d",&k);
a=(x-h)*(x-h)+(y-k)*(y-k);
b=r*r;
if(a==b){
	printf("the point lie in the circle");
}
else if(a<b){
	printf("the point is inside the circle");
}
else{
	printf("point are outside the circle");
}
}