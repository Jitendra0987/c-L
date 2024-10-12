#include<iostream>
using namespace std;
#include<string.h>
int main(){
	
	
	char n[20];
	cout<<"enter palandrom"<<"\n";
	cin>>n;
	cout<<"check paledrom or not\n";
	strrev(n);
	if(stricmp (n,"naman")==0)
		{
		cout<<"its plandrom string";
		}
		
		else{
			"not palandrom";
		}
	
	
	
	
}
