#include<iostream>
using namespace std;
int main(){
	
	int a []={4,3,2,4,5,6,3};
	int len=sizeof(a)/sizeof(a[0]);
	int i,j;
	for(i=0; i<len; i++ )
	{
		for(j=0; j<len; j++)
		{
			if(a[i]==a[j])
		{
			break;
		}
		
	}
	if(i==j)
	{
		cout<<a[i]<<"\t";
	}
	
}
}
