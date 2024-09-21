#include<iostream>
using namespace std;
main()
{
float i,p,c;
cout<<"enter value of imposter count (i)=";
cin>>i;
cout<<"enter value of player count (p)=";
cin>>p;
cout<<"chance of being imposter=";
c=100 * (i / p);
cout<<c <<"%";
}