	/* Hospital System
	Class Person ---> name, age
	Class Patient ---> disease
	Class InPatient ---> ward number
	Class Bill ---> amount
	Display full patient record and bill.*/
	#include<iostream>
	using namespace std;
	class Person{
		protected:
			string name;
			int age;
		public:
			Person(string n,int a){
				name = n;
				age = a;
			}
	};
	class Patient : public Person{
		protected:
			string disease;
		public:
			Patient(string n,int a,string d):Person(n , a){
				disease = d;
			}	
	};
	class InPatient : public Patient{
		protected:
			int ward_no;
		public:
			InPatient(string n,int a,string d,int w):Patient(n , a , d){
				ward_no = w;
			}
	};
	class Bill:public InPatient{
		private:
			int bill;
		public:
			Bill(string n,int a,string d,int w,int b):InPatient(n, a, d, w){
				bill = b;
			}
			void display(){
				cout<<".....Electonic Medical Record....."<<endl;
				cout<<"PATIENT NAME: "<<name<<endl;
				cout<<"PATIENT AGE:"<<age<<endl;
				cout<<"DISEASE: "<<disease<<endl;
				cout<<"WARD NUMBER: "<<ward_no<<endl;
				cout<<"BILL UNPAID: "<<bill<<endl;
			}
	};
	int main(){
		Bill P1("Zaheer Khan",67,"Pneumonia",12,1400000);
		P1.display();
		return 0;
		
	}
