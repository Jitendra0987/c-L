#include<iostream>
using namespace std;
int main(){
	
	
	
//   write a program to print reverse number
   
   
   
   	
	int n,r=0;
	cout<<"enter any number";
	cin>>n;
	
	while(n>0)
	{
	
	
	r=r*10+n%10;
	n=n/10;

		
	}
cout<<"reverse of digit="<<r;	
	
	
}
