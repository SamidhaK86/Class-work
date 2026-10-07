
#include<iostream>
using namespace std;

class rectangle{
	public:
		float l,b,Area,perimeter;
		void accept(){
			cout<<"Enter length: ";
			cin>>l;
			cout<<"Enter breadth: ";
			cin>>b;
		}
		void calculateA(){
			Area=l*b;
		}
		
		void calculateP(){
			perimeter=2*(l+b);
		}
		
		void displayA(){
			cout<<"Area of rectangle whose length is "<<l<<" and breadth is "<<b<<" is "<<Area<<endl;
		}

		void displayP(){
			cout<<"Perimeter of rectangle whose length is "<<l<<" and breadth is "<<b<<" is "<<perimeter<<endl;
		}

};
int main()
{
	rectangle rect;
	rect.accept();
	rect.calculateA();
	rect.calculateP();
	rect.displayA();
	rect.displayP();
	return 0;
}
