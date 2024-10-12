#include<iostream>
using namespace std;
       
       void swap(int a,int b)
       {
       	int temp;
       	temp=a;
       	a=b;
       	b=temp;
       	cout<<"after swaping = a "<<a<<"\t";
       	cout<<"after swaping =b "<<b<<"\t";
	   }



int main(){
	
	int a,b;
	cout<<"enter any number\n";
	cin>>a;
	cout<<"enter any number\n";
	cin>>b;
	
	swap(a,b);
	
	
	
	
	
}
