#include <iostream>
#include <string>
using namespace std;

int main() {

  int x = 12;

  long int y = 13;

  cout << "The size of an int in bytes is: " << sizeof(x) << endl;

  cout << "The size of a long int in bytes " << sizeof(y) << endl;

  cout << "The size of a long double in bytes is: " << sizeof(long double) << endl;

  cout << "The size of a double in bytes is: " << sizeof(double) << endl;

  cout << "The size of a long doube precision is: " << sizeof(long double precision) << endl;


  string myStr = "Hello hi howdy o./n";
  myStr = myStr + "Goodbye bye ciao./n";
  cout << myStr;
  //concatenation

    
  return 0;
}


