#include<iostream>
using namespace std;

class tenthfrnd2;
class tenthfrnd1
{
	int per=90;
	friend void result (tenthfrnd1,tenthfrnd2);
	
};

class tenthfrnd2
{
	int per=98;
	friend void result (tenthfrnd1,tenthfrnd2);
};

void result (tenthfrnd1 ob1, tenthfrnd2 ob2)
{
	if(ob1.per>ob2.per)
	{
		cout<<ob1.per<<"is higest";
		
	}
	else{
		cout<<ob2.per<<"is higher";
	}
}

int main(){
	
	tenthfrnd1 ob1;
	tenthfrnd2 ob2;
	result(ob1,ob2);
	
}
