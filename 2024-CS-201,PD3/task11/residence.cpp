#include<iostream>
using namespace std;
main()
{
int a,t,av;
cout<<"person's age as an integer=";
cin>>a;
cout<<"no of times they moved from one house to another as an integer=";
cin>>t;
av=a / (t+1);
cout<<"Average no of years lived in same house=" <<av;
}