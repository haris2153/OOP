/* Question 10:
Create a class Course with:
Course Name
Create a class Instructor with:
Instructor Name
Create a derived class OnlineCourse with:
Duration
Use constructors and display complete details. */
#include<iostream>
using namespace std;
class CourseName{
	protected:
		string course;
	public:
		CourseName(string c){
			course = c;
		}
};
class InstructorName{
	protected:
		string Instructor;
	public:
		InstructorName(string I){
			Instructor = I;
		}
};
class OnlineCourse : public CourseName ,public InstructorName{
	private:
		int duration;
	public:
		OnlineCourse(string c,string I,int d):CourseName(c) , InstructorName(I){
			duration = d; 
		}
		void display(){
			cout <<"Course "<<course<<" tought by "<<Instructor<<" Which is of "<<duration<<" months duration."<<endl;
		}	
};
int main(){
	OnlineCourse CS1("OOP","Dr Taimore Ahmad Khan",6);
	CS1.display();
	return 0;
}
