#include<iostream>
using namespace std;
main()
{
float size,cost,area,cofpp,cofapsf;
cout<<"enter size of fertilizer bag in pounds=";
cin>>size;
cout<<"enter cost of bag=";
cin>>cost;
cout<<"enter the area in sq.feet that covered by bag="<<endl;
cin>>area;
cofpp=cost / size;
cout<<"cost of fertilizer per pound=" <<"$" <<cofpp <<endl;
cofapsf=cost / area;
cout<<"cost of fertilizing per sq.feet=" <<"$" <<cofapsf;
}