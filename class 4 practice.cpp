//Create a class Circle and calculate area of circle.
#include<iostream>
using namespace std;
class circle{
	public:
		float p = 3.1415;
		float r;
		float area ;
	void display()
	{
		p = 3.1415;
	
		
		cout <<"Enter the radius of a circle:"<<endl;
		cin  >> r;
		area = p * r * r;
		cout <<endl<<"........................"<<endl;
		cout <<"Area of a Circle = " << area <<endl;
	}
};
int main()
{
	circle C1;
	C1.display();
	cout <<".................."<<endl;
	circle C2;
	C2.display();
	cout <<".................."<<endl;
	return 0;
}
