#include <iostream>
using namespace std;

class person{
	int age;
	string name;
	char gen;
	
	public:
		person(int age=0,string name=0,char gen=0){
			this->age=age;
			this->name=name;
			this->gen=gen;
		}
		
		void print(){
			cout<<"Age is->"<<age<<endl;
			cout<<"Name is->"<<name<<endl;
			cout<<"Gender is->"<<gen<<endl;
		}
		
		void setAge(int age){
			this->age=age;
		}
		
		void getAge(){
			cout<<"Age is->"<<age<<endl;
		}
		
		void setName(string name){
			this->name=name;
		}
		
		void getName(){
			cout<<"Name is->"<<name<<endl;
		}
		
		void setGen(char gen){
			this->gen=gen;
		}
		
		void getGen(){
			cout<<"Gender is->"<<gen<<endl;
		}
};


int main(){
	
	int a;
	cout<<"age->";
	cin>>a;
	string b;
	cout<<"name->";
	cin>>b;
	char c;
	cout<<"gender->";
	cin>>c;
	
	//creating an object
	person p1(a,b,c);
	p1.print();
	cout<<endl;
	
	
	
	
	return 0;
}

