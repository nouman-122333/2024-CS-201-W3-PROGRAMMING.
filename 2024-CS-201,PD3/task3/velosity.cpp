#include<iostream>
using namespace std;
main()
{
int vi,vf,a,t;
cout<<"enter initial velosity (m/s)=";
cin>>vi;
cout<<"enter acceleration (m/s^2)=";
cin>>a;
cout<<"enter time (s)=";
cin>>t;
vf=vi + a*t;
cout<<"final velosity (m/s)=" <<vf;
}