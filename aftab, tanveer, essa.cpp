#include<iostream>
#include<math.h>
#include<conio.h>
using namespace::std;
int main()
{
int essa, aftab, tanveer;
cout<<" enter  the age of essa khan "<<endl;
cin>>essa;
 cout<<" enter  the age of aftab khan "<<endl;
cin>>aftab;
cout<<" enter   the age of tanveer khan "<<endl;
cin>>tanveer;
if(essa>aftab)
{
if (essa>tanveer)
{
cout<<"essa khan is old"<<endl;
}
else
{
	cout<<"tanveer is old"<<endl;
}
}
else
if(aftab>tanveer)
{
cout<<"aftab is old "<<endl;
}
else
{
	cout<<"tanveer khan is old"<<endl;
}
}
