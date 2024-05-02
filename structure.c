#include<stdio.h>
	struct emp{
		int empid;
		char name[10];
		float salary;
	};
	int main(){
	struct emp s={101,"rudransh",2100.25};
	struct emp e1;
	e1.empid=102;
	strcpy(e1.name,"himanshu");
	e1.salary=25000.25;
	struct emp e3=e1;
	struct emp e4;
	printf("enter the value:");
	scanf("%d",&e4.empid);
	scanf("%s",e4.name);
	scanf("%f",&e4.salary);
	printf("%d\n%s\n%f\n",s.empid,s.name,s.salary);
	printf("%d\n%s\n%f\n",e1.empid,e1.name,e1.salary);
	printf("%d\n%s\n%f\n",e3.empid,e3.name,e3.salary);
	printf("%d\n%s\n%f\n",e4.empid,e4.name,e4.salary);
	printf("%d",sizeof(s));
}