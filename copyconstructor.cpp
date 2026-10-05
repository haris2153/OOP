#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
	student(student &s){
		s.name;
		s.age;
		cout <<"Enter name of student:"<<endl;
		getline(cin , name);
		cout <<"Enter the age of student:"<<endl;
		cin  >> age;
	}
	void dispaly(){
		cout <<"............................"<<endl;
		cout <<"Name: "<<name<<endl;
		cout <<"AGE: "<<age<<endl;
	}
	~student(){
		cout <<"............................"<<endl;
	}
};
int main(){
	student S1 = S1;	
	S1.name = "Haris";
	S1.age = 21;
	student S2 = S1;

	S2.dispaly();
	
	return 0;
}
