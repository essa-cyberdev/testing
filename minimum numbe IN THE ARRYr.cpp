#include<iostream>
using namespace::std;
int main()
{
//	int 
	int arr[5]={6,5,4,3,2};
  int n = sizeof(arr)/4;
	 int mn= INT_MAX;
	 for(int i=0;i<n;i++)
	 {
	 mn = min(mn,arr[i]);
	 }
	 cout<<mn;
}
