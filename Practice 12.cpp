	// Create a class Hotel that stores:
	// room number
	// customer name
	// days stayed
	// Calculate hotel bill using Parametrized constructor.
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
			//Logic must be written in constructor.
			bill = days_Stay * per_Day_Rent;
		}
		// function
		void display(){ 
			cout <<"........................................."<<endl;
			cout <<"--MARCOPOLO HOTEL--"<<endl;
			cout <<"........................................."<<endl;
			cout << "NAME: "<< Name <<endl;
			cout << "Roon No: "<< room_No <<endl;
			cout << "Stayed Nights: "<< days_Stay <<endl;
			cout << "Cost Per Night: "<< per_Day_Rent <<endl;
			cout <<"........................................."<<endl;
			cout << "Total bill: "<< bill <<endl;
		}
		// destructor.
		~Hotel(){
			cout <<"........................................."<<endl;
			cout <<"CHECK OUT"<<endl;
		}
	};
	int main(){
		// Parameters must be initialized in main function.
			string name;
			int room;
			int days;
			 cout <<"Enter the name of guest for booking:"<<endl;
		// If you want to take full name then use getline for cin.
			 getline(cin , name);
			 cout <<"Enter room No allorted to guest"<<endl;
			 cin  >> room;
			 cout <<"Enter the Nights stayed by guest in hotel"<<endl;
			 cin  >> days;
			 
			 Hotel booking(name,room,days,2500);
			 booking.display();
			 
		return 0;
	}
