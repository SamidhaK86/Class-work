#include<iostream>
using namespace std;
/*int main(){
	int num;
	cout<<"Enter  a number: ";
	cin>>num;
	if(num%2==0){
		cout<<"Number is even"<<endl;
	
	}
	 
	else{
		cout<<"Number is odd"<<endl;
	}

}*/



int main(){
	int a;
	cout<<"Enter  a number: ";
	cin>>a;
	string even="EVEN",odd="ODD";
	
	cout<<(a%2==0)?even:odd;
	return 0;
	}
