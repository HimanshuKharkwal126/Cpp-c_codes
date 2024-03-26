#include<stdio.h>
main(){
	FILE *fptr;
	int id;
	char name;
	float salary;
	fptr=fopen("emp.txt","w+");
	printf("enter the name");
	scanf("%s",&name);
	fprintf(fptr, "name=%s\n",name);
		printf("enter the id");
	scanf("%d",&id);
	fprintf(fptr, "id=%d\n",id);
		printf("enter the salary");
	scanf("%f",&salary);
	fprintf(fptr, "salary=%.2f\n",salary);//.2 ka matlb salary float m . k bad 2 point tkhju aaegi..
	fclose(fptr);

	
	
}