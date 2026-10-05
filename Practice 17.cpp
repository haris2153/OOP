	//	Bank Account:
	//	Create a class BankAccount with:
	// 1.)account holdername  2.)account number  3.)balance
	//	Requirements:
	//	Dynamically allocate account holder name
	//	Use deep copy constructor
	//	Create copied object
	//	Destructor should free memory
	#include<iostream>
	using namespace std;
	class BankAccount{
		private:
			string *name;
			int *acc_no;
			int *balance;
			
		public:
			// Parametrized constructor.
			BankAccount(string n,int a,int b){
				name = new string;
				*name = n;
				cout <<"Enter first account holder name:"<<endl;
				getline(cin,*name);
				acc_no = new int;
				*acc_no = a;
				cout <<"Enter account number:"<<endl;
				cin >> *acc_no;
				balance = new int;
				*balance = b;
				cout <<"Total balance:"<<endl;
				cin >> *balance;
				cin.ignore();
				cout <<".........................."<<endl;
			}
			// deep copy constructor.
			BankAccount(BankAccount &B2){
					
					name = new string;
					*name = *(B2.name);
					cout <<"Enter second account holder name:"<<endl;
					getline(cin,*name);
					
					acc_no = new int;
					*acc_no = *(B2.acc_no);
					cout <<"Enter account number:"<<endl;
					cin >> *acc_no;
					balance = new int;
					*balance = *(B2.balance);
					cout <<"Total balance:"<<endl;
					cin >> *balance;
					cin.ignore();
					cout <<".........................."<<endl;
			}
			void display(){
				cout <<"ACCOUNT HOLDER: "<<*name<<endl;
				cout <<"ACCOUNT NUMBER: "<<*acc_no<<endl;
				cout <<"TOTAL BALANCE: "<<*balance<<endl;
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
