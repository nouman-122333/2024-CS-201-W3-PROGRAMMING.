#include<iostream>
using namespace std;
main()
{
string movie;
int atp,ctp,ttp,noas,nocs,per,tadtoc,ra;
cout<<"Enter movie name: ";
cin>>movie;
cout<<"Enter adult ticket price=$";
cin>>atp;
cout<<"enter child ticket price=$";
cin>>ctp;
cout<<"no of adult tickets sold= ";
cin>>noas;
cout<<"no of child tickets sold= ";
cin>>nocs;
ttp=(atp * noas) + (ctp * nocs);
cout<<"total money genrated= "<<"$"<<ttp<<endl;
cout<<"Enter percentage= ";
cin>>per;
cout<<"total percentage donated to charity= "<<per<<endl;
tadtoc=ttp / per;
cout<<"total amount donated to charity= "<<"$"<<tadtoc<<endl;
ra=ttp - tadtoc;
cout<<"total remaining amout after charity= "<<"$"<<ra;
}