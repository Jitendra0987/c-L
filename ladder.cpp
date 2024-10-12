#include<iostream>
using namespace std;
int main(){

int a,b,c;

cout<<"enter 3 number";
cin>>a>>b>>c;


if(a>b && a>c){
    cout<<a<<"larger";

}

else if(b>a && b>c){
cout<<b<<"larger";

}

else{
    cout<<c<<"larger";
}

}
