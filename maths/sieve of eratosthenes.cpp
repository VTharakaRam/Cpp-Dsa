#include <iostream>
#include <vector>
using namespace std;


bool isprime(int n){
	int i=2;
	if(n<=1){
		return 0;
	}
	while(i<n){
		if(n%i==0){
			return 0;
			break;
		}
		i++;
	}
	return 1;
}

int primecount(int n){
	int cnt=0;
	int i=2;
	while(i<n){
		if(isprime(i)){
			cnt++;
		}
		i++;
	}
	return cnt;
}

int sieathens(int n){
	int cnt=0;
	vector<bool> v(n+1,true);
	v[0]=v[1]=false;
	for(int i=2;i<n;i++){
		if(v[i]){
			cnt++;
		}
		for(int j=2*i;j<n;j=j+i){
			v[j]=0;
		}
	}
	return cnt;		
}


int main(){
	
	
	int n;
	cout<<"enter the value"<<endl;
	cin>>n;
	
	cout<<"no of primes are "<<primecount(n)<<endl;
	
	cout<<"using sieathens:"<<sieathens(n);
	
	return 0;
}
