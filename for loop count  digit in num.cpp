#include<iostream>
using namespace std;
int main(){
	
	int count=0;
    int n;
	cout<<"enter any no\n";
	cin>>n;
	
	
	for( n; n>0 ; n=n/10 ){
		
	
		count++;
		
	}
	
		cout<<"total digit="<<count;
	
}
