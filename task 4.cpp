#include<iostream>
using namespace::std;
int main()
{
int n;
cout<<"pleace enter your number"<<endl;
cin>>n;
if ((n%5==0 or n%3==5) and (n%15!=0))
cout<<" yes this is a divisible by 3 and 5 but not divisible by 15 "<<endl;
else 
cout<<" No this is not  divisible by 3 and 5 and not divisible by 15 "<<endl;
}
