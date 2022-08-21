// Setup
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;


// Properties of mods
// (a+b) mod m = (a mod m + b mod m) mod m
// (a-b) mod m = (a mod m - b mod m) mod m
// (a*b) mod m = (a mod m * b mod m) mod m
// Thus, we can take the remainder after every operation and
// the numbers will never become too large

// Example code
int main() {
  // calculates n! mod m
  long long n = 51;
  long long m = 97;
  long long x = 1;
  for (int i = 2; i <= n; i++) {
    x = (x*i) % m; // Doing this makes x much smaller than it otherwise would be
    cout << "x: " << x << " i:" << i << "\n";
  }
  
  x = x%m; // Final mod

  if (x < 0) x += m; // NOTE:: for if the remainder ever becomes negative
  
  cout << x%m << "\n"; // Printing output
}

// g++ -std=c++11 -O2 -Wall test.cpp -o test