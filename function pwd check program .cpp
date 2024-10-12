#include<iostream>
using namespace std;

void deposit (int pwd, int amount )
{
	if(pwd==2025)
	{
		cout<<amount+1000;
	}
	else{
		cout<<"pwd not matched";
	}
	
	if(amount<=0 && amount<=-1)
	{
		cout<<"amount is invelid";
	}
}


int main(){
	
	
	int p,a;
	cout<<"enter your pwd\n";
    cin>>p;
    cout<<"enter amount in rs\n";
    cin>>a;
    deposit(p,a);
    
    
}
