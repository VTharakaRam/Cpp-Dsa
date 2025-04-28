#include <iostream>
//include a header file
#include <array>
using namespace std;




int main(){
	
	
	array<int,4> a ={1,2,3,4};
	
	int size=a.size();
	cout<<"printing the array "<<endl;
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<endl;
	cout<<endl;
	
	
	cout<<"the element at 2 index is:"<<a.at(2)<<endl;
	cout<<"empty or not "<<a.empty()<<endl;
	
	cout<<"first number in array is "<<a.front()<<endl;
	cout<<"last number in array is "<<a.back()<<endl;
	
	//time complexity of above functions used o(1)[constant]
	
	
	return 0;
}
