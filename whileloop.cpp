
#include<iostream>
using namespace std;
int main(){
	
	
	int a=1;
	
	while(a<=10)
	{
		cout<<a<<"\n";
     a++;
	}
	




	
//	w.t.p to find a factorial in any num 


int n, m;


cout<<"enter any factorial num";
cin>>n;

m=n-1;

while(m>=1)
{

	n=n*m;
	m--;
	
	
	
}
cout<<"factorial"<<n;

	
}
