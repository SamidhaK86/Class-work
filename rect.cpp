#include<iostream>
using namespace std;



class addition{
	public:
		float a,b,sum;
		void getInput(){
			cout<<"Enter a number: ";
			cin>>a;
			cout<<"Enter anothr number: ";
			cin>>b;
		}
		
		void calculate(){
			sum=a+b;
		}
	
		
		void display(){
			cout<<"the sum of the two numbers is: "<<sum;
		}
};

int main(){
	addition add;
	add.getInput();
	add.calculate();
	add.display();
	return 0;
}




























