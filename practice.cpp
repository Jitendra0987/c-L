#include<iostream>
using namespace std;
int main(){
	
	int c=0;
	int n;
	cout<<"enter any number\n";
	cin>>n;
	
	for( n; n>0 ; n=n/10 ){
		
		c++;

		cout<<"total digit count\n="<<c;
	}
	
	
	
	
	
}
