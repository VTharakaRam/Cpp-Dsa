#include <iostream>
using namespace std;

#define PI 3.5


class hero{
	private:
	int hel;
	public:
	string game;
	
	//setting the value to hel
	void sethel(int n){
		hel=n;
	}
	hero(){
		cout<<"this is a constructor"<<endl;
	}
	
	//print function to print hel 
	void gethel(){
		cout<<hel<<endl;
	}
};

class car{
	
	
	int hgt;
	string color;
	
	public:
		void pcolor(){
			cout<<color<<endl;
		}
		void setcolor(string s){
			color=s;
		}
		
};


int main(){
	

//*******STATIC MEMORY ALLOCATION	
	car honda;
	cout<<"size->"<<sizeof(honda)<<endl;
//	honda.color="blue";
//	cout<<honda.color<<endl;
	
	string s;
	cin>>s;
	
	honda.setcolor(s);
	honda.pcolor();
	
	
	hero h1;
	cout<<sizeof(h1)<<endl;
//	h1.hel=1;
	h1.game="cricket";
	
	
	cout<<"before->";
	h1.gethel();
	
	int n;
	cin>>n;
	
	h1.sethel(n);
	cout<<"after->";
	h1.gethel();
	
	cout<<"h1.game->"<<h1.game<<endl;
	
	
//*******DYNAMIC MEMORY ALLOCATION**************	
	
	hero *ram=new hero;
	cout<<"size of pointer->"<<sizeof(ram)<<endl;
	cout<<"size of classObject->"<<sizeof(*ram)<<endl;
	
	(*ram).game="baddy";
	cout<<"(*ram).game is->"<<(*ram).game<<endl;
	
	ram->game="TT";
	cout<<"ram->game is "<<ram->game<<endl;
	
}
