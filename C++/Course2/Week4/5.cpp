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

   vector<string> output;
  cout << "The following cities are in the Southern Hemisphere: ";
  for(int j = 6; j< col.size();j+= 4){
    if(stoi(col.at(j))<0){
      output.push_back(col.at(j-2));
      output.push_back(", ");
    }
    }

    output.at(output.size()-1) = ".";
    for(int k = 0; k < output.size(); k++ ){
      cout << output.at(k);
    }



  //add code above this line
  
  return 0;
  
}