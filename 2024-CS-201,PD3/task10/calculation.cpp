#include<iostream>
using namespace std;
main()
{
float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,add,sub,mult,add_mult,add_mult_sub;
cout<<"enter all values"<<endl;
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n>>o;
add=a+b+c+d+e;
cout<<"add="<<add <<endl;
mult=f*g*h*i*j;
cout<<"mult="<<mult <<endl;
sub=k-l-m-n-o;
cout<<"sub="<<sub<<endl;
add_mult=add + mult;
cout<<"add_mult="<<add_mult<<endl;
add_mult_sub=add_mult - sub;
cout<<"add_mult_sub="<<add_mult_sub;
}