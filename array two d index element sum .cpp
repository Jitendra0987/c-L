#include<iostream>
using namespace std;
int main(){
	
	int a [2] [2]={2,3,4,5};
	int b [2] [2]={6,1,2,9};
	
	for(int r=0; r<2; r++){
		for(int c=0; c<2; c++){
			
			cout<<a[r][c]+b[r][c]<<"\t";
		}
		cout<<"\n";
	}
	
}
