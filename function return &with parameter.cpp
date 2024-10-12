#include<iostream>
using namespace std;

int product(int p1,int p2) //return & with parameter
{
	int a=p1*500;
	int b=p2*700;
	return a+b;
}




int main(){
	
	int prod1,prod2;
	cout<<"enter Quantity of mobile\n";
	cin>>prod1;
	cout<<"enter Quantity of pendrive\n";
	cin>>prod2;
	cout<<product(prod1,prod2);
	
	
	
	
}
