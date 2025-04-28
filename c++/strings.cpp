#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int countWords(string value){
	int count =1;
	for(int i=0;i<value.size();i++){
		if(value[i]==' '){
			count=count+1;
		}
	}
    cout<<count<<endl;
    cout<<value.size()<<endl;
    return count;
}

int main(){
	
	
//	string name;
//	cout<<"Please enter your name:"<<endl;
//	cin>>name;
//	cout<<"You have entered:"<<name<<endl;
//	
//	string name1;
//	cout<<"Please enter your name:"<<endl;
//	cin>>name1;
//	cout<<"You have entered:"<<name1<<endl;
//	
//	string name2;
//	name2 = name+" "+name1;
//	cout<<name2<<endl;
//	
//	cout<<"the size of name2 is:"<<name2.size()<<endl;
//	cout<<"the reverse of "<<name<<" is ";
//	reverse(name.begin(),name.end());
//	cout<<name<<endl;
//	cout<<"again reverse of "<<name<<" is ";
//	reverse(name.begin(),name.end());
//	cout<<name<<endl;
//	cout<<"the sorted value of "<<name<<" is ";
//	sort(name.begin(),name.end());
//	cout<<name<<endl;
	
	
//***************example----->For a given input string(str), find and
// return the total number of words present in it,
//It is assumed that two words will have only a single space in between.
// Also, there wouldn't be any leading and trailing spaces in the given input string.

	string input;
	getline(cin, input);
	countWords(input);

	
	return 0;
}
