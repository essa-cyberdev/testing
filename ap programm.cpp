/* QUESTION:
 	Disply this AP (1 3 7 9 . . . n )(aratimatic operation) upto n.
 	Endl term is numknow and we must be know in the condition.
 	FORMULA:
 		an = a (n_1)d. With the help of this formula we find the last term.
		 A is the first term and d in the differrnce*/
#include<iostream>
using namespace::std;
int main()
{
int n;
cout<<"enter n : ";
cin>>n;
for (int i=1  ; i<=2*n-1;i+=2)
cout<< i << " ";
}
