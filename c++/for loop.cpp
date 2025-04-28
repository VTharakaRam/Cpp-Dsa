#include <iostream>
using namespace std;

int main()
{
//	this for loop
//  syntax for, for loop in c++
//  for(initialization;condition;updation)
//  {
//      loop body(C++ code)
//  }

	for(int i=3;i>-1;i--){
		cout<<i<<endl;
	}
	
	cout<<endl;
	
	for(int j=0;j<41;j++){
		cout<<j<<",";
		j++;
//	in this code we had given extra updation below cout so it will read as double addition	
	}
	
	cout<<endl;
	
//	**************** 9 table using for loop******************8888888

    int n;
    cout<<"enter the table no: ";
    cin>>n;
    for(int a=1;a<=10;a++){
    	cout<<n<<" x "<<a<<"= "<<n*a<<endl;
	}
	
	return 0;
}
