#include<iostream>
using namespace std;
class KcaUniversity {
public:
	Kca()
	{	cout << "Kca University. \n";
		cout<<"***************";
	}};
class FinanceSector :public KcaUniversity{
public:
	FinanceSector()
	{	cout<<"************************";		
		cout << "Welcome to the Fiduciary wing of KCA University. \n";
		cout<<"Fees to be paid totals to : 60000/= ";
		cout<<"**********************";	
	}};
class AcademiaSector :public KcaUniversity {
public:
	AcademiaSector()
	{	string name;
		int regno;
		
		cout<<"Enter your name below : \n";
		cin>>name;
		cout<<"Enter registration number assigned to you below : \n";
		cin>>regno;
		cout<<" "<<endl;
		cout<<"**********************"<<endl;	
		cout << "Welcome to the academic wing of Kca University. \n";
		cout<<"Welcome "+name+"\n"+"Admission number : \n" ;
		cout<<regno;
		cout<<" " <<endl;	
		cout<<"What course do you wish to study : \n ";
		string course;
		cin>>course;
		cout<<" "<<endl;
		cout<<"**********************";	
	}};
class Student : public AcademiaSector , public FinanceSector {
public: 
	Student()
	{	cout<<"**********************"<<endl;	
		cout<<"Welcome to Kca University \n ";
	}};
int main()
{
	Student obj;
	return 0;
}
