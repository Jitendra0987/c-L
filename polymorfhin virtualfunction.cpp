#include<iostream>
using namespace std;

class RBI {
	public: virtual void loan (){
		cout<<"approved by rbi\n";
	}
}; 

class SBI : public RBI {
	public : void acct(){
		cout<<"sbi account\n";
	}
	void loan (){
		cout<<"50000\n";
	}
};

class AXIS : public RBI
{
	public : void accntsaving(){
		cout<<"AXIS ACOOUNT\n";
	}
	void loan ()
	{
		cout<<"60000\n";
	}
};

int main(){
	RBI *p;
	RBI t;
	p=&t;
	p->loan();
	
	SBI s;
	p=&s;
	p->loan();
	 
	AXIS a;
	a.loan();
}
