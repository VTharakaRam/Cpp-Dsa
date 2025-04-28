 #include <iostream>
#include <vector>
using namespace std;

class heap{
	public:
		int arr[100];
		int size;
		
		heap(){
			arr[0]=-1;
			size=0;
		}
		
		
		void insert(int val){
			size+=1;
			int index=size;
			arr[index]=val;
			
			while(index>1){
				int parent=index/2;
				if(arr[parent]<arr[index]){
					swap(arr[parent],arr[index]);
					index=parent;
				}
				else{
					return;
				}
			}
		}
		
		void deletion(int x){
			if(size==0 || x>size){
				cout<<"invalid"<<endl;
				return;
			}
			
			arr[x]=arr[size];
			size-=1;
			int index=x;
			while(index<size){
				int lindex=index*2;
				int rindex=index*2+1;
				if(lindex<size && rindex<size && arr[lindex]>arr[index] && arr[rindex]>arr[index]){
					int vindex;
					if(arr[lindex]>arr[rindex]){
						vindex=lindex;
					}
					else{
						vindex=rindex;
					}
					swap(arr[vindex],arr[index]);
					index=vindex;
				}
				else if(lindex<size &&arr[lindex]>arr[index]){
					swap(arr[lindex],arr[index]);
					index=lindex;
				}
				else if(rindex<size && arr[rindex]>arr[index]){
					swap(arr[rindex],arr[index]);
					index=rindex;
				}
				else{
					return;
				}
			}
		}
		
		void print(){
			for(int i=1;i<=size;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};



int main(){
	
	heap h;
	h.insert(50);
	h.insert(56);
	h.insert(51);
	h.insert(45);
	h.insert(58);
	h.insert(64);
	h.insert(55);
	
	h.print();
	
	h.deletion(2);
	
	h.print();
	
	
	
	
}
