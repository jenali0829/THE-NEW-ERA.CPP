#include<iostream>

using namespace std;

class car{
	
	private:
		
		int car_id;
		int car_release_year;
		char car_company_name[100];
		char car_color[100];
		char car_model[100];
		public:
			void read(){
				
				cout<<"Enter car id:";
				cin>>car_id;
				
				cout<<"Enter car release year:";
				cin>>car_release_year;
				
				cout<<"Enter car company name:";
				cin>>car_company_name;
				
				cout<<"Enter car color:";
				cin>>car_color;
				
				cout<<"Enter car model:";
				cin>>car_model;
				
			}
			
			void print(){
				
				cout<<car_id<<endl;
				cout<<car_release_year<<endl;
				cout<<car_company_name<<endl;
				cout<<car_color<<endl;
				cout<<car_model;
			
				
			}
};

main(){
	
	car obj1,obj2,obj3,obj4;
	
	obj1.read();
	obj1.print();
	
	obj2.read();
	obj2.print();
	
	obj3.read();
	obj3.print();
	
	obj4.read();
	obj4.print();
	
	
	}
