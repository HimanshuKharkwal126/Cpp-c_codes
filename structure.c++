#include<iostream>
#include<string>
using namespace std;
int main(){
	struct stu{
		int rollno;
		string name;
		float marks;
	
		                   //for making structure of 2 students in c++
	}stu1,stu2;

	stu1.rollno=1;
	stu1.name="mohit";
	stu1.marks=78.85;
	
	
	stu2.rollno=2;
	stu2.name="rohit";
	stu2.marks=88.85;
	
	cout<<"student name is "<< stu1.name <<" and his roll no is "<< stu1.rollno <<" , he got marks "<< stu1.marks << "\n";
		cout<<"student name is "<< stu2.name <<" and his roll no is "<< stu2.rollno <<" , he got marks "<< stu2.marks ;
}
	
	
	
	
	
	
	
	
	
	
	
	
