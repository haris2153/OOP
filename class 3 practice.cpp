	#include<iostream>
	using namespace std;
	class Employee{
		public:
			string name;
			int id;
			int salary;
			int grade;
			
		void display(string n,int i,int sal,int bps)
		{
			name = n;
			id = i;
			salary = sal;
			grade = bps;
			
			cout << "Employee Name: "<< n <<endl;
			cout << "Employee ID: "<< i <<endl;
			cout << "Salary: "<< sal <<endl;
			cout << "B.P.S: "<< bps <<endl;
		}
		
		void employee_class()
		{
			if(grade >= 17)
			{
				cout << "Class 1 gezzetted officer."<<endl;
			}
			else if(grade <= 16 && grade >= 14)
			{
				cout <<"Class 2 official."<<endl;
			}
			else if(grade <= 12 && grade >= 5)
			{
				cout <<"Class 3 official."<<endl;
			}
			else
			{
				cout <<"Class 4 official."<<endl;
			}
		}
	};
	int main()
	{
			Employee E1;
			Employee E2;
			Employee E3;
			Employee E4;
			Employee E5;
		
		cout <<" -- HOME DEPARTMENT PUNJAB -- "<<endl;
		E1.display("Salman",2568,120000,15);
		E1.employee_class();
		cout <<"..........................."<<endl;
		E2.display("Sultan",2870,62000,4);
		E2.employee_class();
		cout <<"..........................."<<endl;
		E3.display("muneeb",3856,95000,10);
		E3.employee_class();
		cout <<"..........................."<<endl;
		E4.display("Haris Malik",5228,500000,20);
		E4.employee_class();
		cout <<"..........................."<<endl;
		E5.display("Salman",5581,380000,18);
		E5.employee_class();
		cout <<"..........................."<<endl;
		
		return 0;
	}
