#include<iostream>
using namespace std;

class RBI {
	const int r,a;
	public:RBI (int rate,int amount) : r(rate),a(amount)
	{
		cout<<r<<"\n";
		cout<<a<<"\n";	
	}	
};
int main(){
	
	RBI sbi(8,100000);
	RBI axis (14,100000);
}
