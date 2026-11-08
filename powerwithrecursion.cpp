#include<iostream>
using namespace::std;
int power(int a, int b)
{
if (b==0) return 1;
if (b%2==0) retu
{
//cout<< a * power( a, b-1);
cout<< a power(b/2)*a power(b/2);
}
else
{
 cout<< a * power( a, b-1);
}
}
int main()
{
int a,b;
cout<<"Enter base: ";
cin>>a;
cout<<"Enter expon: ";
cin>>b;
 cout<<power (a,b);
}



#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    else
        return a * power(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;

    cout << "Result: " << power(a, b) << endl;
    return 0;
}

