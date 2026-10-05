	/* Question 3: Employee / Manager
	Problem
	Create a base class Employee with:
	ID		Name
	Create a derived class Manager with:
	Department */
	#include<iostream>
	using namespace std;
	class Employee{
		protected:
			int ID;
			string name;
		public:
			Employee(int id,string n){
				ID = id;
				name = n;
			}	
	};
	class Manager:public Employee{
		private:
			string Department;
		public:
			Manager(int id ,string n ,string D):Employee(id , n){
				Department = D;
			}
			void display(){
				cout<<"Employee Name: "<<name<<endl;
				cout<<"Employee ID: "<<ID<<endl;
				cout<<"Depatment: "<<Department<<endl;			
			}	
	};
	int main(){
		Manager details(2424,"Aneela","Home Depatment");
		details.display();
		return 0;
	}
