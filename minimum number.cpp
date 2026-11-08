#include<iostream>
using namespace::std;
int main()
{
	int a,b,c;
	cout<<"enter first number :  ";
	cin>>a;
	cout<<"enter secound number :  ";
	cin>>b;
	cout<<"enter thried number :  ";
	cin>>c;
	if(a<b and a<c) cout<< a << " is minium "<<endl;
	else if (b<a and b<c) cout<< b << " is minium "<<endl;
	else cout << c << " is minium "<<endl;
	}
