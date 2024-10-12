#include<iostream>
using namespace std;
int main(){
	
	int a [3] [3];
	for(int r=0; r<3; r++){
		for(int c=0; c<3; c++){
			cin>> a[r] [c];
		}
			
	}
	cout<<"is output in table \n";
	
	for(int r=0; r<3; r++){
		for(int c=0; c<3; c++){
			if(a[r][c]==0){
				a [r] [c] = -1;
			}
			cout<< a [r] [c] <<"\t";
		}
		
		
	}
	
	
	
}
