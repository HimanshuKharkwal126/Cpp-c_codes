#include<stdio.h>
	struct emp{
		int empid;
		char name[10];
		float salary;
	};
	int main(){
	struct emp s={101,"rudransh",2100.25};                // first type:
	
	struct emp e1;
	e1.empid=102;
	strcpy(e1.name,"himanshu");                          // second type:
	e1.salary=25000.25;
	
	struct emp e3=e1;                                    // third type -> copy same value :
	
	printf("Emp id is:%d\nEmp name is:%s\nEmp salary is:%.2f\n",s.empid,s.name,s.salary);
	printf("Emp id is:%d\nEmp name is:%s\nEmp salary is:%f\n",e1.empid,e1.name,e1.salary);
	printf("Emp id is:%d\nEmp name is:%s\nEmp salary is:%.2f\n",e3.empid,e3.name,e3.salary);
	printf("%d",sizeof(s));
}