#include<iostream>
using namespace std;
class demo{
	private:
		int *data;
	public:
		demo(int value){
			data = new int;
			*data = value;
			cout <<"Enter first data:"<<endl;
			cin  >> *data;
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
};
int main(){
	demo data1(0);
	demo data2 = data1;
	data1.display();
	data2.display();
	
	return 0;
}
