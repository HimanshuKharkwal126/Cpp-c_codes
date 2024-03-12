 #include<iostream>
using namespace std;
class student{
private:
int rollno;
string name;
float marks;
public:
int getdata(){
cout<<" enter the roll no:" ;
cin>>rollno;	
cout<<" enter the name:";
cin>> name;
cout<<" marks:";
cin>> marks;
}                       //array of students in C++  (class) .....
int putdata(){
cout<< " roll no is "<< rollno << endl;
cout<< " name is "<< name<< endl;
cout<< " marks is "<< marks << endl;
}
};
int main(){
	student obj[100];
	int i,n;
	cout<<" enter the no of students ";
	cin>> n;
	for(i=0;i<n;i++){
		obj[i].getdata();
	}for(i=0;i<n;i++){
		obj[i].putdata();
	}
}
	
	
	
	
	
