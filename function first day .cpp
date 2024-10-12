#include<iostream>
using namespace std;

void show() // no return & without parameter
{
	cout<<"welcome\n";
}

void sum (int a, int b)  //no return with parameter
{
	cout<<a+b;
}
int main(){
	
	show();  //explicit calling
	sum(4,5);  // explicit calling
	
	
}
