#include<iostream>
using namespace std;
int main()

//  {
//	
//	int a,b;
//	char c;
//	
//	cout<<"enter 2 no\n";
//	cin>>a>>b;
//	cout<<"select a for add and m for multiply\n";
//	cin>>c;
//	switch(c)
//	{
//		case 'a':
//			{
//				cout<<a+b<<"\n";
//				break;
//			}
//			case 'm':
//			case'M':
//				{
//					cout<<a*b<<"\n";
//					break;
//				}
//				default:
//					{
//						cout<<"invalid choice";
//						break;
//					}
//				
//	}
//	
//	
//}



{
	
	int a,b,c,t;
	cout<<"enter 2 no \n";
	cin>>a>>b;
	cout<<"select 1 for sawap and 2 for max value\n";
	cin>>c;
	switch(c)
	{
		case 1: 
		{
			t=a;
			a=b;
			b=t;
			cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";
			break;
		}
		
case 2:
{
	if (a>b)
	{
		cout<<a<<"is max";
		
	}
	else{
		cout<<b<<"is max";
	}
	break;
		}
		
		default:{cout<<"invalide choice" ;
			break;
		}		
	}
	
}
