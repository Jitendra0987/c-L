#include<iostream>
using namespace std;
int main(){
	
	int si,p,r,t,c;
	
cout<<"enter three value\n";
cin>>p>>r>>t;
	
	cout <<"select 1 for simpal intrest and 2 for largest no\n";
	cin>>c;
	switch(c){
		case 1:{
			
			si=(p*r*t)/100;
			cout<<si;
			break;
		}
		
		case 2:{
			if(p>r && p>t){
				cout<<p<<"is largest";
			}
			
			else if(r>p && r>t){
				cout<<t<<"is largest";
				
			}
			
			else{
				cout<<t<<"is largest";
			}
			break;
		}
		
		default:{
			cout<<"invalid choice";
			break;
		}	
	}	
}












