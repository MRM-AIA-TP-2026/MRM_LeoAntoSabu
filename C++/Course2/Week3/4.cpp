#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  cout << my_string.substr(0, (my_string.length())/2) << endl;
  cout << my_string.substr((my_string.length())/2) << endl; 


  //add code above this line
  
  return 0;
  
}