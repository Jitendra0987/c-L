#include<iostream>
using namespace std;

class tcs
{
	int sal;
	char name;
	
	public : tcs(int s,char n)
	{
		sal=s;
		name=n;
	}
	void shape()
	{
		cout<<name;
		cout<<sal;
	}
};

int main(){
	
	tcs t(2000 'j');
}
