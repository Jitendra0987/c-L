#include<iostream>
using namespace std;

class RBI{
	public : void rmsg(){
		cout<<"\n RBI\n";
	}
	};
	
	class SBI : public RBI
	{
		public :void smsg()
		{
			cout<<"\n SBI";
		}
	};
	
	class cust : public SBI
	{
		public : void cmsg(){
			cout<<"\n custmer \n";
		}
	};

int main(){
	
	cust c;
	c.cmsg();
	c.smsg();
	c.rmsg();
}
