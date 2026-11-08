#include<iostream>
using namespace::std;
int main()
{
int arr[] = {2,3,4};
int n= sizeof (arr)/4;
cout<<n<<endl;
int product = 1;
for(int i=0;i<n;i++)
{
product *= arr[i];
}
cout<<product;
}
