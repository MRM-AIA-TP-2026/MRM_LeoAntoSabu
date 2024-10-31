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
    stringstream ss(read);
    while(getline(ss,read,','))
     col.push_back(read);
  }
  
  for(int i=0;i<4;i++){
    cout << (stoi(col.at(i))+stoi(col.at(i+4))+stoi(col.at(i+8)))/3 <<' ';
  }


  //add code above this line
  
  return 0;
  
}