	#include<iostream>
	using namespace std;
	class car{
		public:
			string company;
			int number;
			
			void display(string com,int num)
			{
				company = com;
				number = num;
				cout << "Company : "<< com <<endl;
				cout << "Model : "<< num <<endl;
			}
			bool compare(car &car1 ,car &car2)
			{
				return car1.number < car2.number;
			}
	};
	int main()
	{
		cout << "Car 1"<<endl;
		car car1;
		car1.display("mercedes",2001);
		cout <<"......................"<<endl;
		cout <<"Car 2"<<endl;
		car car2;
		car2.display("BMW",2018);
		cout <<"......................"<<endl;	
		if(car1.compare(car1,car2))
		{
			cout <<"Your Mercedes is older model and BMW is newer."<<endl;
		}
		else
		{
			cout << "Your BMW is older model and Mercedes is newer."<<endl;
		}
		cout <<".......................";
	}
