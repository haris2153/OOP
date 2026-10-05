	/* Problem
	Create a base class BankAccount with:
	Account Number
	Balance
	Create a derived class SavingsAccount with:
	Interest Rate
	Calculate interest. */
	#include<iostream>
	using namespace std;
	class BankAccount{
		protected:
			int acc_no;
			int Balance;
		public:
			BankAccount(int a,int B){
			acc_no = a;
			Balance = B;
		}
	};
	class SavingAccount:BankAccount{
		private:
			float rate;
		public:
			SavingAccount(int a , int B ,int R):BankAccount(a , B){
				rate = R;
			}
		void display(){
			float interest = Balance * rate / 100;
			
			cout <<"ACCOUNT NO: "<<acc_no<<endl;
			cout <<"BALANCE: "<<Balance<<endl;
			cout <<"INTEREST: "<<interest<<endl;
		}	
	};
	int main(){
		SavingAccount harry(2424,850000,6);
		harry.display();
		return 0;
	}
