#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  int a;
  a = my_string.length();
  cout << my_string[0] << " is the first character and " << my_string[a-1] << " is the last character" << endl;


  //add code above this line
  
  return 0;
  
}