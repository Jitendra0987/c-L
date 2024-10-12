#include<iostream>
using namespace std;

class RBI{
	public : RBI (){
		cout<<"\n RBI \n";
	}
	~RBI()
	{
		cout<<"RBI DEL\n";
	}
};

class SBI : public RBI
{
	public :SBI()
	{
		cout<<"\n SBI \n";
	}
	
	~SBI(){
		cout<<"\n SBI DEL\n";
	}
};

class CUST :public SBI
{
	public : CUST()
	{
		cout<<"\n CUST \n";
	}
	~CUST()
	{
		cout<<"CUST DEL\n";
	}
};

int main(){
	
	CUST c;
	
}
