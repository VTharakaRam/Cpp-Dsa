#include <iostream>
#include <vector>
using namespace std;

void saydigit(int n){
	vector<string> v={"zero","one","two","three","four","five","six","seven",
	"eight","nine"};
	if(n==0){
		return;
	}
	saydigit(n/10);
	cout<<v[n%10]<<" ";
}

int main(){
	
	int n;
	cin>>n;
	
	saydigit(n);
	
	
}
