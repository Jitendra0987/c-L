#include<iostream>
using namespace std;
//write a program to display the larger number with the help of friend functionclass

class x;
class y
{
int a=20;
friend void large(x,y);
};

class x
{
	int b=25;
	friend void larger2(x,y);
};

void main(a  ob1,  b ob2)
{
	if(ob1.b>ob2.a)
	{
		cout<<ob1.b<<"higest";
	}
	else{
		cout<<ob2.a<<"is higher";
	}
}
int main(){
	x ob1;
	y ob2;
	
	main(ob1,ob2);
	
}
