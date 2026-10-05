// Create a class Laptop whose default constructor assigns:
// brand = HP
// RAM = 8GB
#include<iostream>
using namespace std;
class Laptop{
	public:
		string brand[2];
		string model[2];
		int RAM[2];
		string RAM_Type[2];
		int price[2];
		int GPU[2];
		int SSD[2];
		// default constructor.
	
	Laptop(){
		brand[0] = "HP";
		brand[1] = "Microsoft";
		
		RAM[0] = 8;
		RAM[1] = 16;
		SSD[0] = 512; 
		SSD[1] = 1024;
		RAM_Type[0] = "DDR 6";
		RAM_Type[1] = "DDR 4";		
		price[0] = 120000;
		price[1] = 148000;
		
		GPU[0] = 4;
		GPU[1] = 8;
		
		cout <<brand[0] <<" Laptop specifications include:"<<endl<<RAM[0] << " GB, "<< RAM_Type[0] <<" RAM with "<< GPU[0] <<" Graphic Card and "<< SSD[0] <<" GB storage."<<endl<<"Price is "<< price[0] <<" Rs "<<endl; 
		
		cout<<"................................................................"<<endl;		
		cout <<brand[1] <<" Laptop specifications include:"<<endl<<RAM[1] << " GB, "<< RAM_Type[1] <<" RAM with "<< GPU[1] <<" Graphic Card and "<< SSD[1] <<" GB storage."<<endl<<"Price is "<< price[1] <<" Rs "<<endl;
		cout<<"................................................................"<<endl;
	}	
	// destructor.
	~Laptop()
	{
		cout << "Destructor called."<<endl;
	}
};
int main()
{
	Laptop Lap;
	return 0;
}
