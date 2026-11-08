//	Disply this AP (1 3 7 9 . . . n )(aratimatic operation) upto n.
//AP with out formula 
#include<iostream>
using namespace::std;
int main()
{
int n;
cout<<"enter n : ";
cin>>n;
int a=4;
for (int i=1;i<=n;i++)
{ 
cout<<a<<" ";
a = a + 3;
}
}
