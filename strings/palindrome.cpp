#include <iostream>
using namespace std;

int lenarr(char ar[]){
	int length=0;
	for(int i=0;ar[i]!='\0';i++){
			length++;
	}
	return length;
}

bool isPalindrome(int x) {
        long long int ans=0;
        int a=x;
        if(a<0){
            return false;
        }
        else if(a==0){
            return true;
        }
        else{
            while(a!=0){
                int n=a%10;
                ans=(ans*10)+n;
                a/=10;
            }
        }
        if(ans==x){
            return true;
        }
        return false;
}
   
char tolowercase(int ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		return ch-'A'+'a';
	}
}

bool numpalindrome(char ar[],int n){
	int s=0,e=n-1;
	while(s<e){
		if(tolowercase(ar[s])==tolowercase(ar[e])){
			s++,e--;
		}
		else{
			return 0;
			break;
		}
	}
	return 1;
}


int main(){
	
	int x;
	cout<<"enter the number:";
	cin>>x;
	
	bool n=isPalindrome(x);
	if(n==1){
		cout<<"the number is palindrome"<<endl;
	}
	else{
		cout<<"the number is not palindrome"<<endl;
	}
	
	char name[30];
	cout<<"enter the value in string:";
	cin>>name;
	
	int size=lenarr(name);
	cout<<"size of string is:"<<size<<endl;
	
	bool m=numpalindrome(name,size);
	if(m==1){
		cout<<"the string is palindrome"<<endl;
	}
	else{
		cout<<"the string is not palindrome"<<endl;
	}
	
	return 0;
}
