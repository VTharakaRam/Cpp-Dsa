#include <iostream>
#include <queue>
using namespace std;


int main(){
	
	//max heap
	priority_queue<int> max;
		
	max.push(1);
	max.push(4);
    max.push(9);
    
    int n=max.size();
    for(int i=0;i<n;i++){
    	cout<<max.top()<<" ";
	}
	cout<<endl;
	
	cout<<"size is:"<<max.size()<<endl;
	cout<<"top element->"<<max.top()<<endl;
	max.pop();
	cout<<"top element->"<<max.top()<<endl;
	cout<<"size is:"<<max.size()<<endl;
	
	
	
	//mini heap
	
	priority_queue<int,vector<int> ,greater<int> > min;
	min.push(1);
	min.push(4);
    min.push(9);
	min.push(5);
	min.push(7);
	
	int m=min.size();
	cout<<"size before pop->"<<m<<endl;
	for(int i=0;i<m;i++){
		cout<<min.top()<<" ";
		min.pop();
	}
	cout<<endl;
	cout<<"size after pop->"<<min.size()<<endl;
	cout<<"element present is:"<<min.top()<<endl;
	cout<<"size after pop->"<<min.size()<<endl;
	cout<<min.top()<<" "<<endl;
	for(int i=0;i<2;i++){ 
		cout<<min.top()<<" ";
		cout<<"hi"<<endl;
	}


	
	return 0;
}
