#include<iostream>

using namespace std;

class data{
	
	private:
		
		int a=99;
		int b=27;
		
		public:
			
			void display(){
				
				cout<<a<<endl;
				cout<<b;
			}
};

main(){
	data obj;
	
	obj.display();
	}
