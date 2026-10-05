#include<iostream>
using namespace std;

class BankAccount{
	private:
		string *name;
		int *acc_no;
		int *balance;
		
	public:
		
		// Parameterized constructor (WITH PARAMETERS + INPUT)
		BankAccount(string n, int a, int b){
			
			name = new string;
			acc_no = new int;
			balance = new int;
			
			*name = n;
			*acc_no = a;
			*balance = b;
			
			cout <<"Enter account holder name:"<<endl;
			getline(cin , *name);
			
			cout <<"Enter account number:"<<endl;
			cin >> *acc_no;
			
			cout <<"Enter balance:"<<endl;
			cin >> *balance;
			
			cin.ignore();
			
			cout <<".........................."<<endl;
		}
		
		// deep copy constructor
		BankAccount(BankAccount &B2){
			
			name = new string;
			acc_no = new int;
			balance = new int;
			
			*name = *(B2.name);
			*acc_no = *(B2.acc_no);
			*balance = *(B2.balance);
			
			cout <<"Enter second account holder name:"<<endl;
			getline(cin , *name);
			
			cout <<"Enter account number:"<<endl;
			cin >> *acc_no;
			
			cout <<"Enter balance:"<<endl;
			cin >> *balance;
			
			cin.ignore();
			
			cout <<".........................."<<endl;
		}
		
		void display(){
			cout <<"ACCOUNT HOLDER: "<<*name<<endl;
			cout <<"ACCOUNT NUMBER: "<<*acc_no<<endl;
			cout <<"BALANCE: "<<*balance<<endl;
		}
		
		~BankAccount(){
			delete name;
			delete acc_no;
			delete balance;
			cout <<"THANK YOU!"<<endl;
		}
};

int main(){
	
	BankAccount B1("x",0,0);
	BankAccount B2 = B1;
	
	B1.display();
	B2.display();
	
	return 0;
}
