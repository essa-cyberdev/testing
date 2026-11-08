  #include<iostream>
   #include<cmath>
using namespace::std;
int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int a = 1 ;
//int a;
	for(int i=1; i<=n; i++)
	{
	  a *= i;  ;
	}
	 cout<<"factorial of n is equal to :"<<a<<endl;
	 
	 int r;
	cout<<"Enter r : ";
	cin>>r;
	
	int b = 1 ;
	for(int i=1; i<=r; i++)
	{
	 b *= i;
	}
		 cout<<"factorial of r is equal to :"<<b<<endl;
	 cout<<"formutation is equal to :"<<n/(n-r);
	 ;
	 
}
