#include<iostream>
using namespace std;
    
    void  grater(int a, int b)
    {
    	if(a<b)
		{
    		cout<<"greater is b";
		}
		else
		{
			cout<<"greater is a;";
		}
	}





int main(){
	
	int a,b;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter secound number";
	cin>>b;
	
	grater(a,b);
	
}
