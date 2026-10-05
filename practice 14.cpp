	#include<iostream>
	using namespace std;
	class Bezatti{
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
		Bezatti mishu;
		mishu.setvalue(25);
		cout <<"The amount of bezatti which CR receives "<<mishu.getvalue()
		<<" times per day from masturaat."<<endl;
		
		return 0;
		
	}
