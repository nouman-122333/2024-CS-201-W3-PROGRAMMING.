#include<iostream>
using namespace std;
main()
{
int fdn,sum,First_digit,Second_digit,Third_digit,Fourth_digit;
cout<<"Enter four digit number=";
cin>>fdn;
cout<<"We have to find sum of individual digits of 4-digit number"<<endl <<"For this we use modulus operator to extract each digit"<<endl;
First_digit=(fdn/1000) % 10;
Second_digit=(fdn/100) % 10;
Third_digit=(fdn/10) % 10;
Fourth_digit=(fdn) % 10;
sum=First_digit + Second_digit + Third_digit + Fourth_digit;
cout<<"Sum of individual digits="<<sum;
}
