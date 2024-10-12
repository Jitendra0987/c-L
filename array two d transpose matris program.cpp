#include<iostream>
using namespace std;
int main(){
	
	int a [3] [3]={7,8,9,3,2,1,4,5,6};
	for(int r=0; r<3; r++){
		for(int c=0; c<3; c++){
			cout<< a [r] [c]<<"\t";
		}
			cout<<"\n";
	}
	cout<<"transpose element \n";
	
	for(int r=0; r<3; r++){
		for(int c=0; c<3; c++){
		     
		     cout<<a[c][r]<<"\t";
			}
		  cout<<"\n";
		}
		
		
	}
	
	
	

