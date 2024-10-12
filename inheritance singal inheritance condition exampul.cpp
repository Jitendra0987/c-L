#include<iostream>
using namespace std;

class RBI{
	
	protected : int a=90;
	public :void show(){
		cout<<"RBI="<<a<<"\n";
	}
	
	protected :void error()
	{
		cout<<"approved by RBI\n";
	}
};

class SBI : public RBI
{
	int d = 80;
	public: void fshow()
	{
		cout<<"SBI="<<d<<"\n";
		cout<<"RBI="<<a<<"\n";
		error();
	}
};
int main(){
	
	SBI s;
	cout<<sizeof(s)<<"\n";
	s.fshow();
	
}
