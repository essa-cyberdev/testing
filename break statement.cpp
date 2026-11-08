#include<iostream>
using namespace::std;
int main()
{
char grade = 'E' ;
switch (grade)
{
case'A':
cout<<"excellent"<<endl;
break;
case'B':
cout<<"outstanding"<<endl;
break;
case 'C':
cout<<"can do better"<<endl;
break;
case 'D':
cout<<"you fallied"<<endl;
break;
case 'E':
cout<<"invalied grade"<<endl;
break;
default:
	cout<<"pleace enviloed more grade"<<endl;
}
}
