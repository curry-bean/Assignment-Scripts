#include <iostream>
using namespace std;
class Box {
   double width;
   double length;
   
   public:
      friend void printWidth( Box box );
      friend void printLength( Box box );
      void setWidth( double wid );
      void setLength( double len);
};

// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}

void Box::setLength( double len ) {
   length = len;
}
// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}
void printLength( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Length of box : " << box.length <<endl;
}
// Main function for the program
int main() {
   Box box;
 
	int W;
	int L;
	 cout<<"Enter length of your box : \n";
	 cin>>L;
	 cout<<"Enter width of your box : \n";
	 cin>>W;
	 
   // set box width without member function
   box.setWidth(W);
   box.setLength(L);
   
   // Use friend function to print the wdith.
   printWidth( box );
   printLength( box );
 
   return 0;
}
