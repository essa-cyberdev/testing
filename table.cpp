#include<iostream>
using namespace::std;
int main()
{
int n;
cout<<"enter n : ";
cin>>n;
for(int i=1; i<=10*n; i++)
if(i%n==0)
cout<<i<<" ";

//for(int i=1; i<=10*n;i++)
//if(i%n==0)
//cout<< i<<" "<<endl;
}
