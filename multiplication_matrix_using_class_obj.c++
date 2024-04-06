#include<iostream>
using namespace std;
class matrix{
	private:
	int a[2][2],b[2][2],c[2][2],i,j,k;
	public:
	void getdata(){
	cout<<" enter the elements of matrix A :"<<endl;
	cout<<endl;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	cout<<" enter the elements "<<i<<j<<endl;
	cin>>a[i][j];
	}
	}
	cout<<" enter the elements of matrix B:"<<endl;
	cout<<endl;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
    cout<<" enter the elements "<<i<<j<<endl;
	cin>>b[i][j];
	}
	}
	}
	void putdata(){
	cout<<" A matrix is "<<endl;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	cout<<a[i][j]<<endl;	
	}	
	}
	cout<<endl;
	cout<<" B matrix is "<<endl;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	cout<<b[i][j]<<endl;
	}
	}
	}
	int returndata(){
	for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    	c[i][j]=0;
    for(k=0;k<2;k++){
    c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }
    cout<<" C matrix is "<<endl;
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    cout<<c[i][j]<<"  ";
    }
    cout<<endl;
    }
    }
	};
	int main(){
	matrix obj;
	obj.getdata();
    obj.putdata();
    obj.returndata();
	}
		
	