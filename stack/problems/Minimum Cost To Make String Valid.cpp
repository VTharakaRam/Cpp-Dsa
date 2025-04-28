#include <iostream>
#include <stack>
using namespace std;

int findMinimumCost(string str) {
    if(str.size()%2!=0){
    	return -1;
  	}
  	
  	stack<char> s;
  	
  	for(int i=0;i<str.size();i++){
    	if(str[i]=='{'){
      		s.push(str[i]);
    	} 
    	else{
      		if (!s.empty() && s.top() == '{') {
        		s.pop();
      		} 
      		else {
        		s.push(str[i]);
      		}
    	}
  	}
  	
  	int a=0,b=0;
  	while(!s.empty()){
    	if(s.top()=='{'){
      		a++;
    	}
    	else{
      		b++;
    	}
    	s.pop();
  	}
  	int ans=(a+1)/2+(b+1)/2;
  	return ans;
}

void print(string s){
	if(findMinimumCost(s)==-1){
		cout<<"expression is not valid"<<endl;
		return;
	}
	
	cout<<"no.of changes should be done->"<<findMinimumCost(s)<<endl;
}

int main(){
	
	string s="{{}}}}}{";
	print(s);
	
	string d="}}{";
	print(d);
	
	string g="}}}}{{{{{}";
	print(g);
	
}
