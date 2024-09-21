#include<iostream>
using namespace std;
main()
{
int fps,total,minute;
cout<<"enter no of minutes=";
cin>>minute;
cout<<"enter no of frames per second=";
cin>>fps;
total=fps * minute * 60;
cout<<"the total no of frames= " <<total;
}