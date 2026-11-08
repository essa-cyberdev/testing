#include<iostream>
using namespace::std;
int power(int a, int b)
{
if (b==0) return 1;
return a * power (a ,b-1);
}
int main()
{
int a,b;
cout<<"Enter base: ";
cin>>a;
cout<<"Enter expon: ";
cin>>b;
 cout<<power (a,b);
 return 0;
}



//#include <iostream>
//using namespace std;
//int power(int a, int b) 
//{
//    if (b == 0)
//        return 1;
//    return a * power(a, b - 1);  // Recursively multiply base
//}
//int main() 
//{
//    int a, b;
//    cout << "Enter base: ";
//    cin >> a;
//    cout << "Enter exponent: ";
//    cin >> b;
//
//    cout << "Result: " << power(a, b) << endl;
//    return 0;
//}

