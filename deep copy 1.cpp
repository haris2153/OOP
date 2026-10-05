	// DEEP COPY.
	
	#include<iostream>
	using namespace std;
	class demo{
		private:
			int *data;
		public:
			//Parametrized Constructor.
			demo(int value){
				data = new int;
				*data = value;
				
			}
			//copy constructor
			demo(demo &d){
				data = new int;
				*data = *(d.data);
				
			}
			void display(){
				cout <<"DATA: "<< *data <<endl;
				cout <<"......................."<<endl;
			}
			~demo(){
				delete data;
				cout <<"  THE END "<<endl;
			}
	};
	int main(){
		demo data1(26);
		demo data2 = data1;
		data1.display();
		data2.display();
		
		return 0;
	}
