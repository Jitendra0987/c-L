#include<iostream>
using namespace std;
#include<string.h>
int main(){
	
	char s[40];
	char n[30]="BHOPAL";
	cout<<"enter name\n";
	cin>>s;
	cout<<"length="<<strlen(s)<<"\n";  //string length
	cout<<"capital letter="<<strupr(s)<<"\n";  //string upper latter
	cout<<"small letter="<<strlwr(n) <<"\n";  //string lower latter
	cout<<"marge="<<strcat(s,n)<<"\n";   // string concatenation
	strcpy(s,n);  //string copy
	cout<<"s="<<s<<"\n";
  cout<<strrev(n);  //string revrse
    cout<<"enter pwd\n";
cin>>s;

if(stricmp(s,"sunday")==0)  //string compare
{
	cout<<"matched";
}
else
{
	cout<<"mis matched";
}
}
