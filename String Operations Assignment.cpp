#include <iostream>
#include <algorithm>
using namespace std;
string removeNumbers(string s1)
{
    int current = 0;
    for(int i = 0; i< s1.length(); i++){
        if(!isdigit(s1[i])){
            s1[current] = s1[i];
            current++;
        }
    }
    return s1.substr(0,current);
}
void compare(string s1,string s2)
{
	if (s1 != s2)
    {
		cout<<"Strings are unequal";}
	else
		cout<<"Strings are equal";
}
void Character(string s1)
{
    cout << s1.at(0);
}
void Character1(string s2)
{
    cout << s2.at(0);
}
string Palindrome(string s1)
{
    string P = s1;
 	reverse(P.begin(), P.end());
 	if (s1 == P) {
        return "String 1 is a palindrome";
    }
    else {
    	return "String 1 IS NOT a palindrome";
    }
}
string Palindrome2(string s2)
{
    string P = s2;
 	reverse(P.begin(), P.end());
 	if (s2 == P) {
        return "String 2 is a palindrome";
    }
    else {
    	return "String 2 IS NOT a palindrome";
    }
}
int main()
{
    string s1,s2;

    cout << "Enter the string : " << endl;
    getline(cin,s1);

	cout << "Enter the string : " << endl;
    getline(cin,s2);
    
	cout<<"	************************************** " <<endl;
	cout<<" The output of the above.  " <<endl;
	cout<<" ************************************** "  <<endl;
	cout<<" " <<endl;
	cout<<"Here ONLY numbers will be removed." <<endl;
	cout << "String One with no numbers : " << removeNumbers(s1) << endl;
	cout << "String Two with no numbers : " << removeNumbers(s2) << endl;
	cout<<" ************************************** "  <<endl;
	cout<<" " <<endl;
	cout<<"Here we will check if the strings compare " <<endl;
	compare(s1, s2);
	cout<<" " <<endl;
	cout<<" ************************************** "  <<endl;
	cout<<" " <<endl;
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	cout<<"Here we convert to Upper Case." <<endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout<<" ************************************** "  <<endl;
	cout<<" " <<endl;
	cout<<"Here we check if the strings are palindromes " <<endl;
	cout << Palindrome(s1) <<endl;
	cout << Palindrome2(s2) <<endl;
	cout<<" ************************************** "  <<endl;
	cout<<" " <<endl;
	cout<<"Here we check the first character of every string " <<endl;
	Character(s1) ;
	cout<<" " <<endl;
	Character1(s2) ;
	
}
