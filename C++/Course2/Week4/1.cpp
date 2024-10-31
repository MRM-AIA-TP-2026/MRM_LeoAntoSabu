#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
int l, c;
try {
ifstream file;
string read;
file.open(path);
if (!file) {
throw runtime_error("File failed to open.");
}
while (getline(file, read)) {
l++;
c += read.length();
}
file.close();
}
catch (exception& e) {
cerr << e.what() << endl;
}
cout << l << " line(s)" << endl;
cout << c << " character(s)" << endl;
  //add code above this line
  
  return 0;
  
}