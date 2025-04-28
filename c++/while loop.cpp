#include <iostream>
using namespace std;

int main()
{
//	******************this is a while loop*********************

//  syntax for, while loop
//  intialisation
//  while(condition)
//  loop body (C++ code)
//  updation


	int i=0;
	while(i<8){
		cout <<i<<endl;
		i++;
	}
	
	
	int a=3;
	while(34>40){
	   cout<<a<<endl;
	   a++;
	}
	
//	***************** 6 table using while loop****************

    int n;
    cout<<"enter the table no: ";
    cin>>n;
    int m=1;
    while(m<=10){
	    cout<<n<<" x "<<m<<"="<<n*m<<endl;
	    m++;
}
	
	
//****************this is infinite while loop**********************

//	int j=1;
//	while(34>40){
//		cout<<i<<endl;
//		i++;
//	}

	return 0;
}
