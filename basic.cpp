#include<iostream>
using namespace std;
int main(){
	
	
	int  a,b,c;
	
	
	cout<<"enter number";
	cin>>a>>b>>c;
	
	
	if(a>b && a>c)
	{
		cout<<"larger"<<a;
	}
	
	
	else if(b>a && b>c)
	
	{
		cout<<"larger"<<b;
	}
	
	else{
		cout<<"larger"<<c;
	}
	
}
