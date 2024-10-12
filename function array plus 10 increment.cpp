#include<iostream>
using namespace std;

void funn(int a[],int s)
{
 for(int i=0; i<s; i++)
 {
 	a[i]=a[i]+10;
 }	
}



int main(){
	
	int a[]={55,6,7,8,9};
	int s=sizeof(a)/sizeof(a[0]);
	funn(a,s);
	for(int i=0; i<s; i++)
	{
		cout<<a[i]<<"\t";
	}
	
	
}
