#include<iostream>
using namespace std;

class cybrom
{
	public:int a,b; //data member
	void show()
	{
		cout<<"first program";
	}
};


int main(){
	
	cybrom obj;
	obj.a=90; //encapsulation
	cout<<obj.a<<"\n";
	obj.show();
	

}
