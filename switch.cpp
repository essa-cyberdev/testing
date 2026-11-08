#include<iostream>
using namespace::std;
int main(){
	int a ,b;
	cout<<"enter value of a : "<<endl;;
	cin>>a;
	char ch;
	cout<<"enter operater "<<endl;
	cin>>ch;
	cout<<"enter value of b "<<endl;
	cin>>b;
	
	switch (ch)
	{
		case '+':
		 cout<<a+b<<endl;
		 break;
	
		case '-':
		 cout<<a-b<<endl;
		 break;
	
		case '*':
		 cout<<a*b<<endl;
		 break;
	
		case '/':
		 cout<<a/b<<endl;
		 break;
	}
}
