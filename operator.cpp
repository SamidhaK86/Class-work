#include<iostream>
using namespace std;
int main(){
	int a=10, b=20;
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	int num= ++a-b;
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	int val= a++ -b;
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	cout<<"Num = "<<num<<endl;
	cout<<"Val= "<<val<<endl;

	return 0;
}
