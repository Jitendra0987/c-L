#include<iostream>
using namespace std;

class cybrom{
	
	int a,b;
	public:void sum (int a, int b)
	 {
	    this->a=a;
	    this->b=b;
	 	cout<<"sum of two no"<<a+b<<"\n";
	 }
	void sum ()
	{
		cout<<"program of this pointer\n";
		cout<<"a="<<a<<"\t"<<"b="<<b;
	}
};

int main(){
		cybrom t;
		t.sum(10,20);
		t.sum();		
		
	}
