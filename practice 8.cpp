	#include<iostream>
	using namespace std;
	class office{
		public:
			string name[4];
			int employees;
			int salary[4];
			
			office(){
				cout << "Construtor"<<endl;
				
				name[0] = "John";
				name[1] = "Sam" ;
				name[2] = "jerry";
				name[3] = "Tom" ;
				employees = 4;
				salary[0] = 5500; 
				salary[1] = 6200;
				salary[2] = 7200;
				salary[3] = 4800;
				
				cout << name[0] <<" obtain salary of "<< salary[0] <<" $."<<endl;
				cout << name[1] <<" obtain salary of "<< salary[1] <<" $."<<endl;
				cout << name[0] <<" obtain salary of "<< salary[2] <<" $."<<endl;
				cout << name[3] <<" obtain salary of "<< salary[3] <<" $."<<endl;
			}
			~office()
			{
				cout <<"Destructor called"<<endl;
			}
			
			
	};
	int main(){
		office staff;
		
		return 0;
	}
