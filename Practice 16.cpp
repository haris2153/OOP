	// Programming Questions
	// Create a class Car with:
	// 1.brand	2.model   3.price
	//	 Q) Use a copy constructor to copy one - 
	//   object into another and display both objects.
	#include<iostream>
	using namespace std;
	class Car{
		private:
			string brand;
			int model;
			int price;
		public:
			Car(string b,int m,int p){
				brand = b;
				model = m;
				price = p;
				
				
				cout <<"Enter the car brand:"<<endl;
				getline(cin , brand);
				cout <<"Enter the car model:"<<endl;
				cin  >> model;
				cout <<"Enter the car price:"<<endl;
				cin  >> price;
			}	
			Car(Car &c){
				brand = c.brand;
				model = c.model;
				price = c.price;
			}
			void dispaly(){
				cout <<"BRAND: "<<brand<<endl;
				cout <<"MODEL: "<<model<<endl;
				cout <<"PRICE: "<<price<<endl;
			}
			
	};
	int main(){
		Car car1("x",0,0);
		car1.dispaly();
		
		Car car2 = car1;
		car2.dispaly();
		
		return 0;
		
	}
