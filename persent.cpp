
#include<iostream>
using namespace std;
int main(){

int p,c,m;
float per;


cout<<"enter your marks of all subject";
cin>>p>>c>>m;

per=(p+c+m)/3;



if(p<0 || m<0 || c<0)
{
     cout<<"invalid nom";
	
}





else if(p<35 && c>35 && m>35)
{
cout<<"supply in phisycs"<<p;
}

else if(c<35 && p>35 && m>35)
{
	cout<<"supply in chemistry"<<c;
	
}


else if(m<35 && c>35 && p>35)
{
	cout<<"suply in mathe"<<m;
}







else if( m<35 && p<35 && c>35)
{
	cout<<"fail";
}

else if(c<35 && p<35 && m>35 )
{
	cout<<"fail";
}

else if (c<35 && m<35 && p>35 )
{
	cout<<"fail";
}



else if(per>=60 && per<=100)
{
	cout<<" you got first division"<<per;
	
}


else if(per>=50 && per<=60 )
{
	cout<<" you got secound division "<<per;
}


else if(per>=35 && per<=50)
{
	cout<<" you got thired division "<<per;
	
	
}

else if(per<35)

{
	cout<<"fail";
}


else{
	cout<< "invalid";
}

}
