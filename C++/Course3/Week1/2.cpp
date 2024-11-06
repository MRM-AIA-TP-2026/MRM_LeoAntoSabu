#include <iostream>
#include <vector>
using namespace std;

//add code below this line
void GetOddsEvens( string a, vector<int> b){
  if(a == "true"){
    for(auto i : b){
      if(i % 2 == 0) cout << i << endl;
    }
  }
  else if( a == "false"){
    for(auto i : b){
      if(i % 2 != 0) cout << i << endl;
    }
  }  
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}