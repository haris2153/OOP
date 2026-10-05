//Create a class Car with:
//brand		//model		//price
//Requirements:	//Use a parameterized constructor
//Make variables private	//Create getters and setters
//Display all information
	#include<iostream>
	using namespace std;
	class Vehicle{
		private:
			string brand ;
			int model;
			int price;
		public:
			Vehicle(string b,int m,int p){
				brand = b;
				model = m;
				price = p;
				
				cout <<"Enter the brand of a car"<<endl;
				getline(cin, brand);
				cout <<"Enter the Model of a car"<<endl;
				cin  >> model; 
				cout <<"Enter the Price of a car"<<endl;
				cin  >> price;
				
			}
			//brand.
			string getbrand(){
				return brand;
			}
			void setbrand(string b){
				brand = b;
			}
			//model;
			int getmodel(){
				return model;
			}
			void setmodel(int m){
				model = m;
			}
			//price.
			int getprice(){
				return price;
			}
			void setprice(int p){
				price = p;
			}
			
			void display(){
				cout <<"Brand = "<<brand<<endl;
				cout <<"Model = "<<model<<endl;
				cout <<"Price = "<<price<<endl;
			}
	};
	int main(){
		Vehicle car("x",0,0);
		
		
		car.display();
		
		return 0;
	}
