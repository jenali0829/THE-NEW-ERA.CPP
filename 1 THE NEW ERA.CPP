#include<iostream>

using namespace std;

class house{
	
	private:
		
		int kitchen;
		int room;
		int hall;
		int garden;
		
		public:
			
			void read(){
				
				cout<<"Enter kitchen size:";
				cin>>kitchen;
				
				cout<<"Enter room number:";
				cin>>room;
				
				cout<<"Enter hall size:";
				cin>>hall;
				
				cout<<"Enter garden size:";
				cin>>garden;
				
			}
			
			void print(){
				
				cout<<kitchen<<endl;
				cout<<room<<endl;
				cout<<hall<<endl;
				cout<<garden;
				
			}
};

main(){
	
	house vj;
	
	vj.read();
	vj.print();
}
