#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//int main(){
	
//  int a,b;
//	cin>>a;
//	cin>>b;
//	cout<<"integer a is "<<a<<endl;
//	cout<<"integer b is "<<b<<endl;
//	for(int a=4;(a>=1 and a<=9);a++){
//		cout <<a <<"="<<endl;
//	}
	
//	string num[]={"zero","one","two","three","four","five","six","seven",
//    "eight","nine"};
//    int a,b;
//    cout<<"Enter the value of a ";
//    cin>>a;
//    cout<<"enter the value of b";
//    cin>>b;
//    for(int a;a<=b;a++){
//    	cout<<num[a]<<endl;
//    	if(a%2==0){
//    		cout<<"even"<<endl;
//		}
//		else{
//			cout<<"odd"<<endl;
//		}
//    }
//	

//
//    int arr[]={1,2,3,4,5,6,7};
//    int a=0;
//    for(int i=0;i<7;i++){
//        a=a+arr[i];
//        cout<<a<<endl;
//    }
//    cout<<a;
//	


//int max_of_four(int a,int b,int c,int d){
//    if ((a>b)&&(a>c)&&(a>d)){
//    	return a;
//	}
//	else if((b>c)&&(b>d)){
//		return b;
//	}
//	else if(c>d){
//		return c;
//	}
//	else{
//		return d;
//	}
//
//}
//
//int main() {
//	int a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int result;
//    result=max_of_four(a,b,c,d);
//    cout<<result<<endl;
//    
//   ************************pointers question******************* 
//    void value(int a,int b){
//    	int c,d;
//    	c=a+b;
//    	d=a-b;
//    	cout<<c<<endl;
//    	if (d<0){
//    		cout<<-d<<endl;
//		}
//		else{
//			cout<<d<<endl;
//		}
//}
//
//int main(){
//
//    int a,b;
//    cin>>a>>b;
//    value(a,b);


//int main(){
//	
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int b=n;b>0;b--){
//        cout<<a[b-1]<<" ";
//    }



//int main(){
//	
//	
//	string a,b;
//    cin>>a>>b;
//    cout<<a.size()<<" "<<b.size()<<endl;
//    cout<<a+b<<endl;
//    char c;
//    c=a[0];
//    a[0]=b[0];
//    b[0]=c;
//    cout<<a<<" "<<b;


//int main(){    
    
//    int size;
//    cin>>size;
//    int arr[size];
//    for(int i=0;i<size;i++){
//        cin>>arr[i];
//    }
//    double pos_count=0,neg_count=0,zero_count=0;
//    for(int j=0;j<size;j++){
//        if(arr[j]>0){
//            pos_count+=1;
//        }
//        else if (arr[j]<0) {
//        neg_count+=1;
//        }
//        else{
//            zero_count+=1;
//        }
//    }
//    cout<<pos_count/size<<endl;
//    cout<<neg_count/size<<endl;
//    cout<<zero_count/size<<endl;


    
//    int main(){
//    
//    
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int b[n];
//    for(int i=0;i<n;i++){
//        cin>>b[i];
//    }
//    int ali=0,bob =0;
//    for(int i=0;i<n;i++){
//        if(a[i]>b[i]){
//            ali++;
//        }
//        else if(a[i]<b[i]){
//            bob++;
//        }
//        else{
//            continue;
//        }
//    }
//    
//    
//    int c[2]={ali,bob};
//    for(int i=0;i<2;i++){
//        cout<<c[i]<<" ";
//    }

   
   
   
    return 0;
}

