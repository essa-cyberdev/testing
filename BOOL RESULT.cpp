#include<iostream>
using namespace::std;
int main()
{
	int a,b;
    cout<<"da a value warka"<<endl;
    cin>>a;
    cout<<"da b value warka"<<endl;
    cin>>b;
    bool result; 
    result =(a==b); // false
    cout<<"a==b is "<< result <<endl;
    result=(a!=b); //true
    cout<<"a!=b is "<< result <<endl;
    result=a>b; // false
    cout<<"a>b is "<<result<<endl;
    result=a<b; //true
    cout<<"a<b is "<<result<<endl;
    result=a >=b;//false
    cout<<"a>=b is"<<result<<endl;
    result =a <=b;//true
    cout<<"a<=b is "<<result<<endl;
    
}
