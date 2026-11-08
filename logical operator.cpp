#include<iostream>
using namespace::std;
int main()
{
 int a=5;
 int b=8;
 cout<<" the value of a is equal to = "<<a<<endl;
 cout<<" the value of b is equal to = "<<b<<endl;
 
// int result;
bool result;
result = (a>3)&&(b>5); //evaluate to true
cout<<"a>3 is "<<result<<endl;
cout<<"b>5 is "<<result<<endl;
//AND gate
 result = (a>3)&& (b<5);//evaluated to flase
 cout<<"a>3 is "<<result<<endl;
 cout<<"b<5 is "<<result<<endl;
// OR gate
 result = (a>3)||(b<5);
 cout<<"a>3 is "<<result<<endl;
 cout<<"b<5 is "<<result<<endl;
// NOT  gate
 result = !(a<3);
 cout<<"a<3 is "<<result<<endl;
 return 0;
 
}
