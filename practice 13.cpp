#include<iostream>
using namespace std;
class poti{
	private:
		int amount;
	public:
		int getvalue(){
			return amount;
		}
		void setvalue(int a){
			amount = a;
		}
};
int main(){
	poti mishu;
	mishu.setvalue(25);
	cout <<"The amount of poti which mishu excrete is "<<mishu.getvalue()<<" Kg per day"<<endl;
	
	return 0;
	
}
