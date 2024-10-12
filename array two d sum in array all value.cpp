#include<iostream>
using namespace std;
int main(){
	
	
	int a [2][2];
	int sum;
	for(int r=0; r<2; r++){
		for (int c=0; c<2; c++){
			
			cin>>a[r][c];
			
		}
	}
	
	cout<<"out put find\n";
	
	
	for(int r=0; r<2; r++){
		for (int c=0; c<2; c++){
			
		sum=sum+a[r][c];
			
		}
		
	}
	cout<<sum;
}
