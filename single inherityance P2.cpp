/*Question: Vehicle and Car
Create a base class Vehicle with:
Company Name
Model Year
Create a derived class Car with:
Price
Display all details. */
#include<iostream>
using namespace std;
class Vehicle{
	protected:
		string company;
		int model;
	public:
		void inputdetails(){
			
			cout <<"Enter Car Company:"<<endl;
			cin.ignore();
			getline(cin,company);
			cout <<"Enter car model:"<<endl;
			cin  >> model;
		}	
};
class Car:public Vehicle{
	private:
		int price;
	public:
	void inputCar(){
		inputdetails();
		cout <<"Enter the Price of a car:"<<endl;
		cin  >> price;
	}		
	void display(){
		cout <<"Company: "<<company<<endl;
		cout <<"Model: "<<model<<endl;
		cout <<"Price: "<<price<<endl;
	}
};
int main(){
	Car car;
	car.inputCar();
	car.display();
	return 0;
}
