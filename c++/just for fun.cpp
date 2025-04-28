#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	
	cout<<max(3,6)<<endl;
	int day=4;
	switch (day){
	case 1:
	    cout<<"monday"<<endl;
	    break;
	case 2:
		cout <<"tuesday"<<endl;
		break;
	case 3:
	    cout <<"wednesday"<<endl;
	    break;
    case 4:
	    cout <<"thursday"<<endl;
	    break;
	case 5:
	    cout <<"friday"<<endl;
	    break;
	case 6:
	    cout <<"saturday"<<endl;
	    break;
	case 7:
	    cout <<"sunday"<<endl;
		break;				
	}
	
	for(int i=7;i<10;i++){
		cout<<i<<endl;
	}
	
	
	for (int j=49;j<60;j++){
		if (j==55){
		  	break;}
    cout<<j<<endl;  	
	}
	
    for (int k=49;k<60;k++){
		if (k==55){
		  	continue;}
    cout<<k<<endl;  	
	}
	
	int c=34;
	while(c<40){
		cout<<c<<endl;
		c++;
	}
	
	
	int d=3;
	do{
		cout<<d<<endl;
		d++;
    }
	while(d<15);
	
	
	
	return 0;
}
