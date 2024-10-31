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

  vector<string> col;
  ifstream file;
  string read;
  file.open(path);
  while(getline(file,read)){
    col.push_back(read);
  }
  file.close();
  int len = col.size();
  for(int i = len-1;i>=0;i--){
    cout << col.at(i);
  }

  //add code above this line
  
  return 0;
  
}
