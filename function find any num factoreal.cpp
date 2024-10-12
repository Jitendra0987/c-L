#include<iostream>
using namespace std;

   void  factorial(int num)
   {
   	int count=1;
   	
   	for(int i=num; i>=1; i--)
   	{
   		
   		count = num*i;
    }
    cout<<count;
   }



int main(){
	
	int num; 
	cout<<"enter a number \n";
	cin>>num;
	
	factorial(num);
	
	
}
