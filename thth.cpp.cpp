#include<iostream>
using namespace std;
#include<thread>
void evn  (int s, int e)
	{
		for(s;s<=e; s++)
		{
			if(s%2==0)
			{
				cout<<"even no="<<s<<"\t";
			}
		}
	}
	
	void odd (int s,int e)
	{
		for(s;s<=e;s++)
		{
			if(s%2!=0)
			{
				cout<<"odd no="<<s<<"\t";
			}
		}
	}
int main(){
	
	thread t1 (evn,1,2000)
	thread t2 (odd,1,2000)
	
}
