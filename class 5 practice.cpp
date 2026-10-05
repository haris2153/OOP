// Create a class Marks and calculate:
// total marks
// percentage
#include<iostream>
using namespace std;
class Marks{
	public:
		string subject;
		int marks;
		int Total_Marks = 400;
		float percentage;
	int total()
	{
		int sub1, sub2, sub3, sub4;
			
		cout << "Enter Mathematics marks:"<<endl;
		cin  >> sub1;
		cout << "Enter Science marks:"<<endl;
		cin  >> sub2;
		cout << "Enter English marks:"<<endl;
		cin  >> sub3;
		cout << "Enter Urdu marks:"<<endl;
		cin  >> sub4;
		
		marks = sub1 + sub2 + sub3 + sub4;
		cout <<"Obtained Marks = "<< marks <<endl;
		return marks;
	}
	void Show_Pert()
	{
		percentage = (marks / 100) / Total_Marks;
		cout <<"Percentage = "<< percentage <<" % "<<endl;
	}
};
int main()
{
	Marks Ehsan;
	
	cout <<"Ehsan Result:"<<endl; 
	Ehsan.total();
	Ehsan.Show_Pert();
	return 0;
}
