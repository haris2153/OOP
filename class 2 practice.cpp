//Create a class Student with:
//name
//roll number
//marks
//Display student details.
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollNo;
		int marks;
	void display(string n, int Rno, int mks)
	{
		name = n;
		rollNo = Rno;
		marks = mks;
		
		cout << "Student Name: "<< n <<endl;
		cout << "Roll No : "<< Rno <<endl;
		cout << "Marks : "<< mks <<endl;
	}
	void compare_marks()
	{
	
		if(marks < 50)
		{
			cout <<" Failed "<<endl;
		}
		else
		{
			cout <<" Passed "<<endl;	
		} 
	
	}
};
int main()
{
	student S1;
	student S2;
	student S3;
	student S4;
	student S5;
	
	S1.display("Jaleel",01,87);
	S1.compare_marks();
	S2.display("kamil",06,75);
	S1.compare_marks();
	S3.display("maaz",04,80);
	S1.compare_marks();
	S4.display("john",02,48);
	S1.compare_marks();
	S5.display("kaleem",03,50);
	S1.compare_marks();
	
	return 0;
}
