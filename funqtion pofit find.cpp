#include<iostream>
using namespace std;

int product(int qty)
{
	return qty*500;
}

int main(){
	int qty;
	cout<<"enter quantity\n";
	cin>>qty;
	cout<<product (qty)+product(qty)/10;
	
	
	
	
}
