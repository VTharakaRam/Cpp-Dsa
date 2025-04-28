#include <iostream>
using namespace std;

int main()
{
	int i=10;
	do{
		cout<<i<<endl;
	    i++;
	} 
	while(i<=40);
	
//	**************** 5 table using do while loop***********************

	int n;
	cout<<"enter the table no: "<<endl;
	cin>>n;
	int a=1;
    do{
    	cout<<n<<" x "<<a <<"="<<n*a<<endl;
    	a++;
	}
	while(a<=10);

	
	
////******************infinite do while loop********************
//   int j=5;
//   do{
//   	   cout<<j<<endl;
//   	   j++;
//    }
//    while(34<40);
//    
    
   

	return 0;
}
