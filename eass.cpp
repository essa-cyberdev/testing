#include<iostream>
#include<fstream>
using namespace::std;
int main()
{
	char ch[50];
	ifstream flag("c;:\\testrecord.txt");
	cout<<"c++ is a powerfull language"<<endl;
	while(!flag.eof())
	{
		flag>>ch;
		cout<<ch<<endl;
	}
	flag.close();
	return 0;
	
	
	
	
}
