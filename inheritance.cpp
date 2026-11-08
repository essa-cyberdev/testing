#include<iostream>
using namespace::std;
class A
{
public:
void showa()
{
cout<<"i am essa khan from msrdan"<<endl;
}
};
class B: public A
{
public:
void showb()
{
cout<<"i am habiba for pwshawer"<<endl;
}
};
int main()
{
B b1;
b1.showb();
b1.showa();
return 0;
}
