#include<iostream>
using namespace std;
int main(){
	
	 int pass =1234 , a=3;
	 
	 label: 
	 
	 cout<<"enter your pasword";
	 cin>>pass;
	 
	
	 	
	 if(pass==1234)
	 
	 {
	 	cout<<"welcome";
	 }
	
	else 
	{
	 
	 c--;
		 
	if(c<=1){
		cout<<"more attept in one"
		
		goto  label;
		
	}
	
	else{
		cout<<"you blocked";
	}
		 
	}
}
