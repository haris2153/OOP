//Create a class Temperature and convert Celsius into Fahrenheit.
#include<iostream>
using namespace std;
class Temperature{
	public:
		float C;
		float F;
	float display()
	{
		cout <<"Enter temperatue in Celcius:"<<endl;
		cin  >> C ;
		F = (C * 9 / 5) + 32;
		cout <<"Temperature in Fahrenheit = " << F << " degrees " <<endl; 
		
		return F;
	}
	float display2()
	{
		cout <<"Enter temperatue in Fahrenheit:"<<endl;
		cin  >> F ;
		C = ( F * 5 / 9) + 32;
		cout <<"Temperature in Fahrenheit = " << C << " degrees " <<endl; 
		
		return C;
	}
};
int main()
{
	Temperature T1;
	T1.display();
	T1.display2();
	return 0;
	
	
}
