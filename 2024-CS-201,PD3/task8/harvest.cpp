#include<iostream>
using namespace std;
main()
{
float N,M,R,Coins,ronv,ronf,Total_Rps;
int kgv,kgf;
cout<<"Enter coins per kilogram (N) of Vegitables =";
cin>>N;
cout<<"Enter coins per kilogram (M) of Fruits =";
cin>>M;
cout<<"enter no of kilograms of veg= ";
cin>>kgv;
cout<<"enter no of kilograms of fruits= ";
cin>>kgf;
Coins=1.94;
cout<<"1 Rp=="<<Coins<<"coins"<<endl;
ronv=(N * kgv) / 1.94;
ronf=(M * kgf) / 1.94;
Total_Rps=ronv + ronf;
cout<<"Total_Rps per kilogram of veg and fruits= "<<Total_Rps;
}