#include<iostream>
using namespace::std;
int main()
{
double marks;
cout<<"enter your marks"<<endl;
cin>> marks;
 string result =(marks>=250)? "pass" : " fail ";
cout<< "you" << result << " in exam";
}
