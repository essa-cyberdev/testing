#include<iostream>
using namespace::std;
int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int i = 1 ;
	for(int x=1; x<=n; x++)
	{
	 i *= x;
	}
	 cout<<i<<endl;
	 
}
