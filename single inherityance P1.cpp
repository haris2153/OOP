/* Problem
Create a base class Person with:
Name
Age
Create a derived class Student with:
Roll Number
Marks
Use constructors to initialize data and display all information. */
#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
		Person(string n,int a){
			name = n;
			age = a;
		
		}
};
class Student : public Person{
	private:
		int R_no;
		int marks;
	
	public:	
	Student(string n,int a,int rno,int mks):Person(n , a){
		R_no = rno;
		marks = mks;
	}
	void display(){
		cout <<"Name: "<<name<<endl;
		cout <<"Age: "<<age<<endl;
		cout <<"Roll No: "<<R_no<<endl;
		cout <<"Marks: "<<marks<<endl;
	}
}; 
int main(){
	Student student("Harry",22,2224,92);
	student.display();
	return 0;
}
