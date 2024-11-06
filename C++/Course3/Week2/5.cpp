#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
int GetMax(const std::vector<int>& a){
  if (a.size() == 1) {
      return a[0];
    }
  int max = GetMax(std::vector<int>(a.begin() + 1, a.end()));
  return (a[0] > max) ? a[0] : max;
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}