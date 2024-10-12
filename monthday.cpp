#include<iostream>
using namespace std;
int main(){


int a;



cout<<"enter total day of month\n";
cin>>a;


if(a == 31)
{

    cout<<"jan mar may july agust oct des";

}

else if( a == 30)
    {
    cout<<" april jun sep  nov";

    }

else if( a ==  28 ||  a==29)
    {

        cout<<"feb";
    }
else

{

    cout<<"pls enter any valid nom";
}


}
