#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	int s;
	cout <<"What value do yu want to cube : \n ";
	cin>>s;
	cout << "The cube of 3 is: " << cube(s) << "\n";
	return 0;
} 
