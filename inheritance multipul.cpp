#include<iostream>
using namespace std;

class AXIS{
public :AXIS(){
	cout<<"\n AXIS \n";
}
~AXIS()
{
	cout<<"AXIS DEL\n";
}
};

class SBI{
	
	public :SBI()
	{
	 cout<<"\nSBI\n";	
	}
	~SBI(){
		cout<<"sbi del\n";
	}
};

class CUST : public SBI,public AXIS
{
public : CUST()
{
	cout<<"\n cust\n";
}
~CUST()
{
	cout<<"\n CUST DEL\n";
}
};
int main(){
	
	CUST c;
}

