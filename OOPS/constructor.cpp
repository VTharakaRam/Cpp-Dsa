#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class stud{
	int rNo;
	double fee;
	public:
	char *name;
	
	
	public:
		stud(){
			cout<<"Enter the rNO->";
			cin>>rNo;
			name=new char[50];
			cout<<"Enter the name->";
			cin>>name;
			cout<<"Enter the fee->";
			cin>>fee;
		}
		
		void display(){
			cout<<"rNo->"<<rNo<<endl;
			cout<<"Name->"<<name<<endl;
			cout<<"fee->"<<fee<<endl;
		}
		
		stud(int a,char name[],double fee){
			//cout<<"this->"<<this<<endl;
			this->rNo=a;
			this->name=name;
			this->fee=fee;
		}
		
		stud(int a){
			this->rNo=a;
		}
		
		void print(){
			cout<<"rNo->"<<rNo<<endl;
		}
		
		//copy constructor
		
		stud(stud &temp){
			
			char *ch=new char[strlen(temp.name)+1];
			strcpy(ch,temp.name);
			this->name=ch;
			
			this->rNo=temp.rNo;
			//this->name=temp.name;
			this->fee=temp.fee;
		}
		
		void setName(char name[]){
			strcpy(this->name,name);
		}
		
		~stud(){
			cout<<"destructor is called"<<endl;
		}
		
};

int main(){
	
//	stud stud1;
//	stud stud2;
//	stud1.display();
	
	
	
	int a;
	cout<<"enter the rNo:";
	cin>>a;
	char b[4]="ram";
	double c;
	cout<<"enter the fee:";
	cin>>c;
//	stud stud3(a,b,c);
//	cout<<"address of stud3->"<<&stud3<<endl;
//	stud3.display();
	
	
//	int n;
//	cout<<"enter the rNo:";
//	cin>>n;
//	stud *stud4=new stud(n);
//	stud4->print();



	
//*******COPY CONSTRUCTOR***************	
//	cout<<"THIS IS COPY CONSTRUCTOR"<<endl;
//	stud r(a,b,c);
//	r.display();
//	
//	stud m(r);
//	m.display();
//	
//	stud q;
	
	
	
	//shallow and deep copy
	stud j(a,b,c);
	j.display();
	
	//use default copy constructor
	//stud s(j);
	stud s=j;
	s.display();
	
	j.name[0]='j';
	j.display();
	s.display();
	
	
	
	
	//copy assignment operator
//	j=s;
//	j.display();
//	s.display();
	
	
	
	
	
}
