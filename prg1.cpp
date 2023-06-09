#include<iostream>

using namespace std; 
class hotel{

	public:
		int id,rating,year,staff,room;
		char name[20],type[20];
		static  char location[20];
		
	
	public:
		void setter(){
			cout<<"enter a id:";
			cin>>id;
			
			cout<<"enter a name:";
			cin>>name;
			
			cout<<"enter a type of hotel:";
			cin>>type;
			
			cout<<"enter a hotel rating:";
			cin>>rating;
			
			cout<<"enter a quantity of room:";
			cin>>room;
			
			cout<<" enter a quantity of staff:";
			cin>>staff;
		}
		void getter(){
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"location: "<<location<<endl;
			cout<<"type: "<<type<<endl;
			cout<<"rating: "<<rating<<endl;
			cout<<"room: "<<room<<endl;
			cout<<"staff: "<<staff<<endl;
			cout<<"location:"<<location;
		}
};

char hotel :: location[]="surat";

int main(){
	
	hotel obj;
	
	obj.setter();
	obj.getter();
	
	return 0;
}
