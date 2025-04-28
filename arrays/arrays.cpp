#include <iostream>
using namespace std;

void array(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
	}
}

int main(){
	
	
	string fruits[]={"grapes","mango","orange","apple"};
	cout<<fruits[0]<<endl;
    cout<<fruits[1]<<endl;
    cout<<fruits[2]<<endl;
    cout<<fruits[3]<<endl;
    cout<<"size of an array is:"<<sizeof(fruits)<<endl;  
    int arraylength0=sizeof(fruits)/sizeof(string);
    cout<<"size of array named fruits is:"<<arraylength0<<endl;
    
    
    int marks[]={23,54,76,87};
    cout<<marks[2]<<endl;
    //we can also change the value of array 
    marks[2]=55;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"size of an array is:"<<sizeof(marks)<<endl;
    int arraylength1=sizeof(marks)/sizeof(int);
    cout<<"size of array named marks is:"<<arraylength1<<endl;
    cout<<endl;
    cout<<endl;
//arrays by functions     
    cout<<"calling the function"<<endl;
    array(marks,4);
	cout<<endl;
    cout<<endl;
//*******************using for loop for arrays***********************
    
    cout<<"*************BY USING FOR LOOP******************"<<endl;
    for(int i=0;i<4;i++){
        cout<<"The marks of "<< i <<" is "<<marks[i]<<endl;
	}
	 
	 cout<<endl;
	 cout<<endl;
	 
//*******************using while loop for arrays**********************

    cout<<"*************BY USING WHILE LOOP**********************"<<endl;
    int j=0;
    while(j<4){
    	cout<<"The marks of "<< j <<" is "<<marks[j]<<endl;
    	j++;
	}
	
	cout<<endl;
	cout<<endl;
	
	
//******************using do while loop for arrays***********

    cout<<"***************BY USING DO WHILE LOOP***************"<<endl;
    int k=0;
    do{
    	cout<<"The marks of"<< k <<" is "<<marks[k]<<endl;
    	k++;
	}
	while(k<4);
	
	cout<<endl;
	cout<<endl;
	
//***************pointers in array**********************
	
	cout<<"****************POOINTERS IN ARRAY*****************"<<endl;
	int values[]={54,6,43,76,61};
	int* p=values;
	cout<<"The address of "<<values[0]<<" is "<<p<<endl;
	cout<<"The address of "<<values[1]<<" is "<<p+1<<endl;
	cout<<"The address of "<<values[2]<<" is "<<p+2<<endl;
	cout<<"The address of "<<values[3]<<" is "<<p+3<<endl;
	cout<<"The address of "<<values[4]<<" is "<<p+4<<endl;
	
	
	cout<<"the value inside p is "<<*(p)<<endl;
	cout<<"the value inside p is "<<*(p+1)<<endl;
	cout<<"the value inside p is "<<*(p+2)<<endl;
	cout<<"the value inside p is "<<*(p+3)<<endl;
	cout<<"the value inside p is "<<*(p+4)<<endl;
	
	cout<<p<<endl;
	
	cout<<INT_MIN<<endl;
    
    
 	
	
	
	return 0;
}
