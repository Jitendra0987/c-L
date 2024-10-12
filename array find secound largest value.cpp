#include<iostream>
using namespace std;
int main(){
	
	int arr [] = {34,2,5,4,3};
	int s = sizeof(arr)/sizeof(arr[0]);
	int max1=INT_MIN;
	int max2=INT_MIN;
	
	
	for(int i=0; i<s; i++)
	{
		if(arr[i]>max1){
			max2=max1;
			max1=arr[i];
		}
		if(arr[i]>max2&&arr[i]<max1)
		{
			max2=arr[i];
		}
	}
	
	cout<<"secound largest no="<<max2;
	
	
	
}
