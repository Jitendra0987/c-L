#include<iostream>
using namespace std;
int main(){
	
	int aa [] ={2,4,5,3,5,7};
	int s =sizeof(aa)/sizeof(aa[0]);
	for(int i=s-1; i>=0; i--)
	{
		cout<<aa[i]<<"\t";
		
	}
	
}
