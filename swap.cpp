#include<iostream>
using namespace::std;
void swap( int& x, int& y)
{
int temp = x;
x =y ;
y  =temp;
}
int main()
{
 int x=2;
 int y=4;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y<<endl;
}
