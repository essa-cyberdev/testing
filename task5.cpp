#include<iostream>
using namespace::std;
int main()
{
int x,y;
cout<<"enter the value of x "<<endl;
cin>>x;
cout<<"enter the value of y "<<endl;
cin>>y;
if(x>0 and y>0)
{
cout<<"this is the first quadrant "<<endl;
}
else if (x<0 and y>0)
{
cout<<"this is the secound quadrant "<<endl;
}
else if (x<0 and y<0)
{
cout<<"this is the the thired quadrant "<<endl;
}
else if (x>0 and y<0)
{
cout<<"this is the four quadrant "<<endl; 
}
else (x==0 and y==0);
{
	cout<<"origion"<<endl;
}
}
