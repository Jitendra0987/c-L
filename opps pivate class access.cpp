#include<iostream>
using namespace std;

class sbi
{
	public:void display()
	{
		cout<<"sbi customer\n";
	}
};

class axis 
{
	public:
		void show()
		{
			cout<<"axis customer"<<endl;
		}
};

class customer :private sbi,private axis
{
	public : void msg ()
	{
		sbi ::display();
		axis::show();
		cout<<"customer\n";
	}
};

int main(){
	customer c;
	c.msg();
	
}
