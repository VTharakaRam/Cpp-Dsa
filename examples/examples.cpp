#include <iostream>
#include <iomanip>
using namespace std;

//*****************************************************************************
//***************************EVEN NUMBERS******************************
//void num(int n){
//	for(int i=0;i<=n;i++){
//		cout<<i++<<"   ";
//	}
//}
//
//int main(){
//	
//	cout<<"First ten even numbers"<<endl;
//	num(20); 
//	cout<<endl;
//	cout<<"First fifty even numbers"<<endl;
//	num(100);




//****************************************************************************
//*******************ODD NUMBERS******************************
//num(int n){
//	for(int i=0;i<=n;i++){
//		cout<<++i<<"   ";
//	}
//}
//
//int main(){
//	
//	cout<<"first 15 odd numbers:"<<endl;
//	num(30);
//	cout<<endl;
//	cout<<"first 50 odd numbers:"<<endl;
//	num(100);





//***************************************************************************
//*******************EXAMPLES ON LOOPS[MATRIX]********************
//void num(int n){
//		for(int i=1;i<=n;i++){
//		    for(int j=1;j<=n;j++){
//			    cout<<j<<"  ";
//		    }
//	        cout<<endl;	
//	    }
//}
//
//
//void num1(int n){
//	for(int i=3;i>=n;i--){
//	    for(int j=3;j>=n;j--){
//			cout<<j<<"  ";
//		}
//	cout<<endl;	
//	}
//}
//
////************OR********************
//
//void num2(int n){
//		for(int i=1;i<=n;i++){
//		    for(int j=1;j<=n;j++){
//			    cout<<n-j+1<<"  ";
//		    }
//	        cout<<endl;	
//	    }
//}
//
//
//
//int main(){
//	
//	cout<<"FIVE ROWS AND COLUMNS"<<endl;
//	num(5);
//	cout<<"THREE ROWS AND COLUMNS"<<endl;
//	num1(1);
//	cout<<"FIVE ROWS AND COLUMNS "<<endl;
//	num2(5);





//***************************************************************
//***************MATRIX USING LOOPS************************************

//*************using for loop***************** 
//void num(int n){
//	int count=1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<count<<"      ";
//	        count=count+1;
//		}
//		cout<<endl;
//	}
//}
//
////****************using while loop*********************
//
//int num1(int n){
//	int count=1;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<count<<"  ";
//			count=count+1;
//			j++;
//		}
//		i++;
//		cout<<endl;
//	}
//}
//
//
//int main(){
//	
//	cout<<"using for loop"<<endl;
//	num(5);
//	cout<<endl;
//	cout<<"using while loop"<<endl;
//	num1(5);



//*******************************************************************88
//******************PRINTING NUMBERS IN ROWS********************
//num(int n){
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<j<<"  ";
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	
//	num(5);



//********************************************************************
//*********PRINTING STARS AND NUMBERS****************************
//void num(int n){
//	char count='*' ;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<count<<"  ";
//		}
//	cout<<endl;	
//	}
//}
//
//void num1(int m){
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=i;j++){
//			cout<<i<<"  ";
//		}  
//	cout<<endl;	
//	}
//}
//
// num2(int n){
//	int count=1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<count<<"  ";
//			count=count+1;
//		}
//	cout<<endl;	
//	}
//}
//
//int main(){
//	
//	cout<<"printing stars"<<endl;
//	num(5);
//	cout<<endl;
//	cout<<"printing same nos in rows"<<endl;
//	num1(6);
//	cout<<endl;
//	cout<<"printing nos in order"<<endl;
//	num2(5);


	
//**********************************************************************************
//***************example*******************************************
//int no(int n){
//	for(int i=1;i<=n;i++){
//		int value=i;
//		for(int j=1;j<=i;j++){
//			cout<<value<<"  ";
//			value=value+1;
//		}
//	cout<<endl;	
//	}
//}	
//
//	
//int main(){
//
//	no(4);



//***************************************************************************8
//*********************************example*****************************************

//void num(int n){
//	for(int i=1;i<=n;i++){
//		int value=i;
//		for(int j=1;j<=i;j++){
//			cout<<value<<" ";
//			value=value-1;
//		}
//	cout<<endl;	
//	}
//}
//
//int main(){
//	
//	num(4);


//********************************************************************
//********************printing alphabets[same in row]**************

//void num(int n){
//	char v=65;;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<v<<" ";
//		}
//		v=v+1;
//    	cout<<endl;	
//	}
//}
//
//int main(){
//	
//	num(4);


//*********************************************************************************
//************************printing alphabets[same in column]**************

//void num(int n){
//	for(int i=1;i<=n;i++){
//		char a=65;
//		for(int j=1;j<=n;j++){
//			cout<<a<<" ";
//			a=a+1;
//		}
//		cout<<endl;
//	}
//}
//
//
//int main(){
//	
//	num(4);


	
//*************************************************************************
////****************************PRINTING ALPHABETS***********************
//
//void num(int n){
//	char a=65;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<a<<" ";
//			a=a+1;
//		}
//		cout<<endl;
//	}
//}
//
//
//int main(){
//	
//	num(4);




//*************************************************************************
//****************************PRINTING ALPHABETS*********

//void num(int n){
//	for(int i=1;i<=n;i++){
//		char a=64+i;
//		for(int j=1;j<=n;j++){
//			cout<<a<<"  ";
//			a=a+1;
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	
//	num(3);
	


//*******************************************************************
//	**********************PRINTING same ALPHABETS IN TRIANGULAR FORM**********

//void num(int n){
//	for(int i=1;i<=n;i++){
//		char a=64+i;
//		for(int j=1;j<=i;j++){
//			cout<<a<<"  ";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main(){
//	
//	num(4);



//**********************************************************************************
//**************printing alphabets in triangular form********

//void num(int n){
//	char a=65;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<a<<"  ";
//			a=a+1;
//		}
//		cout<<endl;
//	}
//}
//
//int main(){	
//	num(4);




//**************************************************************************
//************printing alphabhets in triangular form**************
//void num(int n){
//	for(int i=1;i<=n;i++){
//		char a=64+i;
//		for(int j=1;j<=i;j++){
//			cout<<a<<"  ";
//			a=a+1;
//		}
//		cout<<endl;
//	}	
//}
//
//
//int main(){
//	num(4);



//**************************************************************************
//*****************************printing alphabets****************

//void num(int n){
//	for(int i=4;i>=n;i--){
//		char a=64+i;
//		for(int j=4;j>=i;j--){
//			cout<<a<<"  ";
//			a=a+1;
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	num(1);


//**************************************************************************
//******************************printing different type of stars***********

//void num(int n){
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i+1;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	num(4);



//***************************************************************************
//***********

void num(int n){
	for(int i=1;i<=n;i++){
		int space=n-i;
		for(int space=n-i;space=space;space--){
			cout<<" ";
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

int main(){
	num(4);
	
	return 0;
}
