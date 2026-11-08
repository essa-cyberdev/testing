#include<iostream>
using namespace::std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
 /*TERNERY OPERATOR :
	DEFINATION : When we write if_else starement in one line so we general use ternary opetator;
	STNTAX: (CONDITION) (QUESTION MARK) (TRUE) (:) (FALSE) (;)
    GRNERAL: CONDITION ? (TRUE) (:) (FALSE) (;)*/
    (n%2==0) ? cout<<"even": cout<<"odd"; 
}
