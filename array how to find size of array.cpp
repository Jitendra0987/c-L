#include<iostream>
using namespace std;
int main(){
	
	int cybrom [] = {4,5,3,5,6};
	
	int s =sizeof(cybrom)/sizeof(cybrom[0]);
	
	cout<<s;
	
	for(int i=0; i<s; i++)
	{
		cout<<cybrom[i]<<"\n";
	}
	
	
}
