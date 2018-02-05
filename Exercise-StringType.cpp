//Ahmad Fahmi bin Azlan
//A17DW4144

#include <iostream>
#include<string>
using namespace std;

int main()
{
	string myName="Pami";
	while(true){

		cout << "Enter Name :";
	  string myName;
		cin >> myName ;

		if(myName=="tisu")	{
			cout<<"Hey tisu!"<<endl;
		}
		else if  (myName =="quit")
		{
			cout<<endl;

			break;

		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}
