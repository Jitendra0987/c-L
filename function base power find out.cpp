#include<iostream>
using namespace std;

   void product(int base, int power)
   {
   	int product =1;
	
	for(int i=1; i<=power; i++)
	{
		product=product*base;
	}
	
	cout<< base <<"\t"<<power<<"\t" <<product;
	
   }


int main(){
	
	int base,power;
	cout<<"enter  base\n";
	cin>>base;
	cout<<"enter power ";
	cin>>power;
	
	product(base,power);
	
	
	
}

