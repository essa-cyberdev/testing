#include<iostream>
using namespace::std;
int main()
{
float temprature[7];
cout<<"enter 7 day temprature="<<endl;
for (int i=0;i<7;++i)
//cout<<temprature<<","<<endl;
cin>>temprature[i];
//cout<<temprature<<","<<endl;
cout<<"enter the last 7 day temprature was:"<<endl;
for (int i=0;i<7;i++)
cout<<temprature<<","<<endl;
}
