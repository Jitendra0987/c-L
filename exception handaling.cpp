#include<iostream>
using namespace std;
//Exception : abnormal condition
//Exception Handling :is used to avoid abnormal condition
int main()/*{

	int a,b;
	cout<<"enter 2no \n";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		
		cout<<a/b;
	}
	
	catch(int e)
	{
		cout<<"denominator can not be zero";
	}
	cout<<"\ndone";
	
}*/



{
	int arr [2]={20,34};
	int i;
	try
	{
		cout<<"enter index \n";
		cin>>i;
		
		if(i>1)
		{
			throw i;
		}
		cout<<arr[i];
	}
	catch(int d)
	{
		cout<<"out of range";
	}
	cout<<"bye bye";
}
