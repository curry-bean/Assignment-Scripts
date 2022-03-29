#include<iostream>
using namespace std;

class KCA {
public:
	KCA()
	{
	cout << "Welcome to KCA university. \n";
	}
};
class Technology : public KCA {
	public:Technology()
	{
		cout<<"Welcome to the school of technology. \n";
	}
};
class BSSD : public Technology{
	public:BSSD()
	{
		cout<<"Welcome to BSSD under School of technology in KCA university. ";
	}	
};
class BSIF : public Technology{
	public:BSIF()
	{
		cout<<"Welcome to BSIF under school of technology in KCA university. ";
}
};

int main()
{
	int ch;
	cout<<"Which course do you take in KCA ? \n Enter 1. BSSD or 2. BSIF \n ";
	cin>>ch;
	if (ch==1)
	{
		BSSD obj2;
	}	
	else if (ch==2) 
	{
		BSIF obj3;
	}
	else
	
		cout<<"Not Applicable.";
	
	return 0;
}
