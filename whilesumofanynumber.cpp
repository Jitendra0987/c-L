#include<iostream>
using namespace std;
int main(){
	
	
//	w.t.p to sum of digit of any way.
	
	int a,s=0;
	cout<<"enter any number\n";
	cin>>a;
		
	while(a>0)
	{
		
		s=s+(a%10);
		a=a/10;
	}
	
	cout<<"sum of digit="<<s;
	
	
//	w.t.p to enter any number then first and last number find a sum
	
	
	int a,f,s;
	
	cout<<"enter any number\n";
	cin>>a;//345
	
	f=a%10;//5
	
	
	while(a>0)
	{
		s=a%10;
		a=a/10;
		
	}
	
	
	cout<<"sum of first & last digit="<<f+s;
}
