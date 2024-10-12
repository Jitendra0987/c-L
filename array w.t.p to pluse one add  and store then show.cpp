#include<iostream>
using namespace std;
int main(){
	int arr [5];
	
	cout<<"enter 5 value \n";
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"store data in array\n";
	
	for(int i=0; i<5; i++)
	{
		arr[i]=arr[i]+1;
		cout<<arr[i]<<"\t";
	}
	
	
	
}
