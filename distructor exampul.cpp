#include<iostream>
using namespace std;

class joy
{
	public:joy(){
		cout<<"joy class\n";
	}
	
	~ joy()
	{
		cout<<"pura saaf kar diya\n";
	}
	
	public:void show()
	{
		cout<<"wellcome\n";
	}
};

int main(){
	
	joy p;
	
	cout<<"size of (p)\n";
	p.show();
	
}
