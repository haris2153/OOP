// Create a class Time using constructor:
// hours
// minutes
// seconds
#include<iostream>
using namespace std;
class Time{
	public:
		int Total_Secs;
		int hrs;
		int min;
		int sec;
		int remaining_secs;
	// Default Constructor.
	Time(){
		cout <<"Enter total seconds:"<<endl;
		cin  >> Total_Secs;
		
		hrs = Total_Secs / 3600;
		remaining_secs = Total_Secs % 3600;
		
		min = remaining_secs / 60;
		sec = remaining_secs % 60;	
		cout <<endl;
		cout <<"HH:MM:SS "<<endl<<hrs <<":"<< min <<":"<< sec <<endl;
	}
	//destructor.
	~Time()
	{
		cout <<"..........................."<<endl;
	}
};
int main(){
	Time converter;
	return 0;
}
