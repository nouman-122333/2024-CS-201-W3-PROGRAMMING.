#include<iostream>
using namespace std;
main()
{
int n,w,h,nowicp;
cout<<"no pf sq meters I can paint=";
cin>>n;
cout<<"width of single wall in meters=";
cin>>w;
cout<<"heigth of single wall in meters=";
cin>>h;
nowicp=n / (w * h);
cout<<"No of walls I can paint=" <<nowicp <<endl;
}