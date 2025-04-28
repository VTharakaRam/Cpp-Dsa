#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char d){
	if(d=='+' || d=='-' || d=='*' || d=='/' || d=='('){
		return 1;
	}
	return 0;
}

bool para(string v){
	stack<char> s;
	for(int i=0;i<v.size();i++){
		if(isOperator(v[i])){
			s.push(v[i]);
		}
		else{
		   	if(v[i]==')'){
				if(s.top()=='('){
					return 1;
				}
				while(s.top()!='('){
					s.pop();
				}
				s.pop();
			}
		}
	}
	return 0;
}

void print(string s){
	if(para(s)){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
}

int main(){
	
	string s="(a+(b*c))";
	
	print(s);
	
	string d="((a+b))";
	
	print(d);
	
}
