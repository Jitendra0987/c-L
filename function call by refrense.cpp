#include<iostream>
using namespace std;
void swp(int &a, int &b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	cout<<"after swapping a="<<a<<"\t";
	cout<<"after swapping b="<<b<<"\t";
}
int main(){
	
	int a,b;
	cout<<"enter values =a\n";
	cin>>a;
	cout<<"enter value =b\n";
	cin>>b;
	swp(a,b);
	cout<<a<<"\t"<<b;
	
	
}
