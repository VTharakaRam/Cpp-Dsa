#include <iostream>
using namespace std;

int h=20;

#define pi 3.14
#define square(x) (x * x)
#define print cout<<
#define min(a,b) (a>b)? b:a 


//chain macros
// defining first macro 
#define CLERK 10 
  
// defining second macro 
#define worker CLERK       

int large(int &a,int &b){
	cout<<h<<endl;
	return (a>b)? a:b;
}



int main(){
	
	int n;
	cout<<"value of n"<<endl;
	cin>>n;
	
	cout<<"area->"<<pi*n*n<<endl;
	cout<<endl;
	cout<<"pi->"<<pi<<endl;
	h++;
	
	int a=10;
	int b=5;
	//cout<<(a>b)? a:b<<endl;
	print"largest->"<<large(a,b)<<endl;
	
	int sum=0;
	b+=7;
	
	sum=(a>b)? a:b;
	print"larger"<<sum<<endl;
	
	int c=9;
	int d=10;
	
	if(min(a,b)>min(c,d)){
		print"it works"<<endl;
	}
	else{
		print"not"<<endl;
	}
	
	print"square->"<<square(a)<<endl<<endl;
	
	cout<<"worker->"<<worker<<endl<<endl;
	
	//predifined macros
	print"this is line "<<__LINE__<<" in file "<<__FILE__<<endl;
	print"compiled on "<<__DATE__<<" at time "<<__TIME__<<endl;
	cout<<endl;
	
	cout<<"value in main "<<h<<endl;
	h++;
	cout<<h<<endl;
	
	
	
}
