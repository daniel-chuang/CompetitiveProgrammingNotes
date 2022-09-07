#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int kth_highest(std::vector<int> v, int k) {
   sort(v.begin(), v.end()); // Sorts the vector
   return v[v.size() - k];
}

int main() {
  vector<int> v{5, 3, 2, 1};
  cout << kth_highest(v, 3);
}