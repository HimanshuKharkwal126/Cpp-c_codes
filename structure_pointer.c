#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	struct stu himanshu={1,"himanshu kharkwal",78.4};
	struct stu *ptr=&himanshu;
	printf("%d %s %f",(*ptr).rollno,ptr->name,ptr->marks);
	//*ptr=>ptr->name=(*ptr).name/rollno/marks
}