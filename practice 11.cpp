// Create a class Hotel that stores:
// room number
// customer name
// days stayed
// Calculate bill using constructor.
#include<iostream>
using namespace std;
class Hotel{
	public:
		string Name;
		int room_No;
		int days_Stay;
		int bill;
		int per_Day_Rent = 2500;
	// Parametrized Constructor.
	Hotel(string N,int R_n,int d,int pdr){
		
		Name = N;
		room_No = R_n;
		days_Stay = d;
		
		per_Day_Rent = pdr;
		 
		 cout <<"Enter the name of guest for booking:"<<endl;
		 getline(cin , Name);
		 cout <<"Enter room No allorted to guest"<<endl;
		 cin  >> room_No;
		 cout <<"Enter the Nights stayed by guest in hotel"<<endl;
		 cin  >> days_Stay;
		//logic.
		 bill = days_Stay * per_Day_Rent;
		
		cout <<"........................................."<<endl;
		cout << "NAME: "<< Name <<endl;
		cout << "Roon No: "<< room_No <<endl;
		cout << "Stayed Nights: "<< days_Stay <<endl;
		cout << "Cost Per Night: "<< per_Day_Rent <<endl;
		cout << "Total bill: "<< bill <<endl;
	}
	~Hotel(){
		cout <<"........................................."<<endl;
		cout <<"CHECK OUT"<<endl;
	}
};
int main(){
	Hotel booking("x",0,0,2500);
	return 0;
}
