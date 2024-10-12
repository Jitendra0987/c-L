#include<iostream>
using namespace std;

int dsc(int n)
{
	if(n==0)   //base case
	{
		return 0;
	}
	cout<<n<<"\t";     
	dsc (n-1);      //tail recurtion   //relation
}
int main(){
	
dsc (5);
}




//int dsc(int n)
//{
//	if(n==0)      //base case
//	{
//		return 0;
//	}
//	dsc(n-1);      //head recurtion  //relation
//	cout<<n<<"\t";
//}
//
//int main(){
//	dsc(5);
//}





