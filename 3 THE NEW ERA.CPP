#include<iostream>

using namespace std;

class data{
	
	private:
		
		int emp_id;
		int emp_age;
		int emp_salary;
		char emp_name[100];
		char emp_role[100];
		char emp_experience[100];
		char emp_city[100];
		char emp_company_name[100];
		
		public:
			void read(){
				
				cout<<"Enter id:";
				cin>>emp_id;
				
				cout<<"Enter age:";
				cin>>emp_age;
				
				cout<<"Enter salary:";
				cin>>emp_salary;
				
				cout<<"Enter name:";
				cin>>emp_name;
				
				cout<<"Enter role:";
				cin>>emp_role;
				
				cout<<"Enter experience:";
				cin>>emp_experience;
				
				cout<<"Enter city:";
				cin>>emp_city;
				
				cout<<"Enter company name:";
				cin>>emp_company_name;
				
				
				
			}
			
			void print(){
				
				cout<<emp_id<<endl;
				cout<<emp_name<<endl;
				cout<<emp_role<<endl;
				cout<<emp_age<<endl;
				cout<<emp_salary<<endl;
				cout<<emp_experience<<endl;
				cout<<emp_city<<endl;
				cout<<emp_company_name<<endl;
				
				
			}
};

main(){
	
	data obj1,obj2,obj3,obj4,obj5;
	
	obj1.read();
	obj1.print();
	
	obj2.read();
	obj2.print();
	
	obj3.read();
	obj3.print();
	
	obj4.read();
	obj4.print();
	
	obj5.read();
	obj5.print();
	}
