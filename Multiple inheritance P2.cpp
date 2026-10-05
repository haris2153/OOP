	/* Question 11: BankAccount , Loan and Customer
	Create a class BankAccount with:
	Account Number	--->	Balance
	Create a class Loan with:
	Loan Amount
	Create a derived class Customer with:
	Customer Name */
	#include<iostream>
	using namespace std;
	class BankAccount{
		protected:
			int Acc_no;
			int balance;
		public:
			void Accountdetails(){
				cout <<"Enter Account number:"<<endl;
				cin  >> Acc_no;
				cout <<"Balance in Account:"<<endl;
				cin  >> balance;
			}
	};
	class Loan{
		protected:
			int loan_ammount;
		public:
			void LoanDetails(){
				cout <<"Enter the requres loan:"<<endl;
				cin  >> loan_ammount;
			}
	};
	class customer : public BankAccount,public Loan{
		private:
			string customer_name;
		public:
			void display_details(){
				
				cout<<"Customer Name: "<<endl;
				cin.ignore();
				getline(cin , customer_name);
				
			}	
			void display(){
				cout <<"CUSTOMER NAME: "<<customer_name<<endl;
				cout <<"ACCOUNT NO: "<<Acc_no<<endl;
				cout <<"BALANCE : "<<balance<<endl;
				cout <<"LOAN GRNATED: "<<loan_ammount<<endl;
			}
	};
	int main(){
		customer C;
		
		C.Accountdetails();
		C.display_details();
		C.LoanDetails();
		
		C.display();
		
		return 0;
	}
