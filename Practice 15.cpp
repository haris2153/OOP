//	15. Library System
//	Create a class LibraryBook with:
//	book title
//	author name
//	issued days
//	Requirements:
//	Use constructor
//	Create getter/setter functions
//	Calculate fine if days > 7
//	Formula:
//	Fine=(Issued Days-7)×10
	#include<iostream>
	using namespace std;
	class Librarybook{
		private:
			string tittle;
			string author;
			int issue_days;
			int fine;
		public:
			Librarybook(string t,string a,int d,int f){
				tittle = t;
				author = a;
				issue_days = d;
				fine = f;
				fine = (issue_days - 7) * 10;
				
				cout <<"Enter the name of tittle of a book"<<endl;
				getline(cin , tittle);
				cout <<"Enter the name of Author of a book"<<endl;
				getline(cin , author);
				cout <<"Issued Days:"<<endl;
				cin >> issue_days;
				cout <<"..............................."<<endl;
			}
			// tittle.
			string gettittle(){
				return tittle;
			}
			void settittle(string t){
				tittle = t;
			}
			//Author.
			string getauthor(){
				return author;
			}
			void setauthor(string a){
				author = a;
			}
			//issue days.
			int getdays(){
				return issue_days;
			}
			void set_days(int d){
				issue_days = d;
			}
			//fine.
			int getfine(){
				return fine;
			}
			void setfine(int f){
				fine = f;
			}
			void display(){
				cout <<"--HARRY'S LIBRARY--"<<endl;
				cout <<"..............................."<<endl;
				cout <<"BOOK TITTLE: "<<tittle<<endl;
				cout <<"BOOK AUTHOR: "<<author<<endl;
				cout <<"ISSUED DAYS: "<<issue_days<<endl;
				fine = (issue_days - 7) * 10;
				if(issue_days > 7)
				{
					cout <<"FINE TO BE PAID: "<<fine<<" Rs "<<endl;
				}
				else
				{
					cout <<"FINE TO BE PAID: "<<"0 "<<endl;
				}
				
			}
	};
	int main(){
		Librarybook student1("x","y",0,0);
		
		student1.display();
		return 0;
	}
