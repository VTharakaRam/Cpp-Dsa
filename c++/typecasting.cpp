#include <iostream>
using namespace std;

int main(){
    
//	now we going to see typecasting 
//	it means,it changes float into int and int to float

    int a=34;
    float b=43.64;
    
    cout<<"the value of a "<<a<<endl;
    cout<<"the value of a "<<float(a)<<endl; 
    
    cout<<"the value of b "<<b<<endl;
    cout<<"the value of b "<<int(b)<<endl;
    cout<<"the value of b "<<(int)b<<endl;
    
    int c;
    
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a+int(b) is "<<a+int(b)<<endl;
    cout<<"the value of a+(int)b is "<<a+(int)b<<endl;
    
    
	return 0;
}
