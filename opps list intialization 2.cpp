#include<iostream>
using namespace std;

class atm {
	public:atm(int cardno)
	{
		cout<<"card No"<<cardno<<"\n";
		
	}
};

class customer :public atm
{
public:customer (int c, int p) : atm(c)
{
	cout<<"pwd="<<p<<"\n";
}
 	
};

int main(){
	
	customer paisa (1001,2025);
}
