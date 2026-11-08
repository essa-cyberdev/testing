#include<iostream>
using namespace::std;
int divide (int a, int b=2)
{
int r;
r=a/b;
return (r);
}
int main()
{
cout<<"result by passing one argument ="<<divide(20);
cout<<endl;
cout<<"result by provinding both argumant = "<<divide;
return 0;
}
