#include<iostream>
using namespace std;
class bank
{	public:
		string account_holder;
		float balance;
		
		void get_values()
		{	cout<<"ENter name of account holder: "<<endl;
			cin>>account_holder;
			cout<<"Enter balance amount in bank account: "<<endl;
			cin>>balance;
		}
		
		void deposit()
		{	float amount;
			cout<<"Enter amount to deposit: ";
			cin>>amount;
			if(balance>0){
				balance=balance+amount;
				cout<<balance<<endl;
				cout<<"Amount successfully deposited"<<endl;
				}	
			else{
				cout<<"Bank account is empty"<<endl;
			}
		}

		void withdraw()
		{	float amount;
			cout<<"Enter amount to withdraw: ";
			cin>>amount;
			if(amount>0 && amount<=balance)
			{	balance=balance-amount;
				cout<<balance<<endl;
				cout<<"Amount successfully withdrawn"<<endl;
				}
			else{
				cout<<"Not enough balance in account"<<endl;
			}
			
		}
		
		void display()
		{	cout<<"The account holder is: "<<account_holder<<endl;
			cout<<"The balance is: "<<balance<<endl;
			
		}
};


int main(){
	bank bk;
	bk.get_values();
	bk.deposit();
	bk.withdraw();
	bk.display();
	return 0;

}
