#include<iostream>
using namespace std;

void funarr(int a[],int s)
{
	for(int i=0; i<s; i++)
	{
		cout<<a[i]<<"\t";
	}
}


int main(){
	
	int a[]={56,4,23,6,7};
	int s= sizeof(a)/sizeof(a[0]);
     funarr(a,s);
    
	
	
}
