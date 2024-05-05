#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	int i;
	struct stu s[3];
	for(i=0;i<3;i++){
		printf("enter the name:");
		scanf("%s",s[i].name);
		printf("enter the roll no:");
		scanf("%d",&s[i].rollno);	
		printf("enter the marks:");
		scanf("%f",&s[i].marks);
	}
	printf("%s",s[1].name);
}