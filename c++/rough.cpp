#include <iostream>
#include <cmath>
using namespace std;

void no(int* &n){
	int* a=n;
	*a=234;
}

int main(){
	
//	cout<<"hello world";
//	int a=2;
//	float b=8.9;
//	char c='V';
//	string d="Tharaka Ram";
//	
//	cout<<a<<endl<<b <<endl<<c<<"."<<d<<endl;
//	
//	int e=4;
//	int f=8;
//	int temp;
//	
///*	temp=e;
//	e=f;
//	f=temp;
//	
//	cout<<e<<" "<<f <<endl;*/
//	
//	string g;
//	cout<<"what's your sister name"<<endl;
//	cin>>g;
//	cout<<"my sister name is" <<" "<<g <<endl;
//	
//	cout<<a+b<<endl;
//	
//	cout<<a-b<<endl;
//	
//	cout<<a*b<<endl;
//	
//	cout<<a/b<<endl;
//	
//	cout<<a%f<<endl;
//	
////	a+=5;
////	cout <<a;
//	
//	cout <<a<<endl;
//
//    cout<<((e<f)||(a>b))<<endl; 	
//    
//    
//    bool rain;
//    string h;
//    cout<<"IS IT RAINING OUTSIDE"<<endl;
//    cin>>h;
//    if (rain==1){
//	cout<<"YOU CAN'T GO TO MOVIE"<<endl;
//	}
//	else{
//		cout<<"you can go to cinema"<<endl;
//	}
//	
//	int i,j;
//	cin>>i>>j;
//	if(i>j){
//		cout<<"then j is smaller than i"<<endl;
//		if(i%3==0){
//			cout<<"then i is a multiple of 3"<<endl;
//		}
//		else{
//			cout <<"then i is not a mutliple of 3"<<endl;
//		}
//	}
//	else if(i==j){
//		cout<<"both are equal"<<endl;
//	}
//	else {
//		cout<<"then i is smaller than j";
//	}
//    
//    int k;
//	for(k=3;k>1;k--){
//		cout<<k<<endl;
//		} 
     
   
//    void myFunction(string fname){
//        cout << fname << " Doe";
//    }
//
//    int main() {
//    myFunction("John");



//    int myFunction(int x) {
//       return 5 + x;
//	}
//
//    int main() {
//    	
//        cout << myFunction(3);  
//    return 0;
//    }



//*********************( it will t times )***********************
//      int t=1;
//      cin>>t;
//      while(t--){
//      	int a,b,c;
//      	cin>>a>>b>>c;
//      	if((a<b)&&(b<c)){
//      		cout<<"c"<<endl;
//		}
//		else if((a>b)&&(a>c)){
//			cout<<"a"<<endl;
//		}  
//      	else if(a==b==c){
//      		cout<<"equal"<<endl;
//		}
//      	else{
//      		cout<<"b";
//		}	
//	  }

//int a=8;
//cout<<sizeof(a)<<endl;


//int n,ans;
//int i=0;
//cin>>n;
//while(n>0){
//	int rem=n%10;
//	ans=pow(10,i)*rem+ans;
//	i+=1;
//	n/=10;
//}
//cout<<ans<<endl;
//cout<<pow(2,3);

//int a=2;
//int b=a+1;
//if((a=3)==b){
//	cout<<a<<endl;
//}
//else{
//	cout<<a+1<<endl;
//}

//int n;
//cin>>n;

//for(int i=1;i<n;i++){
//	int j=i-1;
//	for(;j>=0;j--){
//		if(n>j){
//			cout<<j<<endl;
//			cout<<"cbjfbjs";
//		}
//		else{
//			cout<<"hi"<<endl;
//			break;
//		}
//	}
//}
    
	
	
	
	
	
	
	
	
	
	int n;
	cin>>n;
	int* a=new int(n);
	cout<<*a<<endl;
	no(a);
	cout<<*a<<endl;
	
	
	
	return 0;
}
