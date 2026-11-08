 #include<iostream>
using namespace::std;
int main()
{
int arr[] = {23,45,67,89,90};
int n= sizeof (arr)/4;
cout<<n<<endl;
int sum = 0;
for(int i=0;i<n;i++)
{
sum += arr[i];
}
cout<<sum;
}
