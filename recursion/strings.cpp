#include <iostream>
using namespace std;

//reversing a string
void reverse(string &a,int s){
	
	if(s>a.length()-s-1){
		return; 
	}
	
	swap(a[s],a[a.length()-s-1]);
	s++;
	reverse(a,s);
	//cout<<a;
}

//palindrome
bool check(string &s,int i){
	if(i>s.size()-i-1){
		return 1;
	}
	if(s[i]!=s[s.length()-i-1]){
		return 0;
	}
	i++;
	check(s,i);
}

string print(string &s){
	return s;
}


int main(){
	
	string name="tharak";
	string k="rakwar";
	
	if(check(k,0)){
		cout<<"element is palindrome"<<endl;
	}
	else{
		cout<<"it is not palindrome"<<endl;
	}
	
	cout<<"before reverse->"<<print(name)<<endl;
	reverse(name,0);
	cout<<"after reverse->"<<print(name)<<endl;
	
//	int a=5;
//	int b=1;
//	cout<<((~a)^(~b));
	
	
}
