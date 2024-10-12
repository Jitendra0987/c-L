#include<iostream>
using namespace std;

class client
{
	public:void virus()
	{
		cout<<"hurray !!! ur system got hacked \n";
	}
};

class  reward
{
	client c;
	public : void doller()
	{
		cout<<"u got $ 10000000000\n";
		c.virus();
	}
};
int main(){
	
reward r;
r.doller();	
}
