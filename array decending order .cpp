#include<iostream>
using namespace std;
int main(){
	
	int mm []={4,5,7,2,14};
	int s=sizeof(mm)/sizeof(mm[0]);
	for(int i=0; i<s; i++)
	{
		cout<<mm[i];
		
	}
	for(int i=0; i<s; i++){
	
		for(int j=i+1; j<s; j++)
		{
			if(mm[i]<mm[j])
		}
		cout<<"sdesending number\t";
	
	for(int i=0; i<s; i++)
	{
		cout<<mm[i]<<"\t";
	}
	
	
	
}
