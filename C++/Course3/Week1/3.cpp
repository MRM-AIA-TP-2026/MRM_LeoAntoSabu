#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool FindTerm(string a, vector<string> b){
  for( auto i : b){
    if(a == i){
      break;
      return true;
    }
  }
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}