#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool IsPalindrome(string a) {
  int b = a.size();
  string c;
  for (int i = 0; i < b; i++) {
    c += a[b - 1 - i]; 
  }
  if (a == c) return true; 
  else return false;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}