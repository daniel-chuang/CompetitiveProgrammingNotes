// Includes everything in the standard library
#include <bits/stdc++.h>

// Makes it so that you don't need to do std::
using namespace std;

// The main loop
int main() {
  // type int is 32 bits
  // type long long is 64 bits
  int x = 123;
  long long y = 123456789021134LL;
  cout << x << "\n" << y << "\n";
  
  // Common mistake is to still use int type with long longs
  int a = 123456789;
  // long long b = a*a; THIS WON'T WORK BECAUSE a*a is still an int
  long long b = (long long)a*a;
  cout << b << "\n";

  // There is also __int128_t which has 128 bits, but it isn't available in all contests

  return 0;
}

// Everything can be compiled with
// g++ -std=c++11 -O2 -Wall test.cpp -o test
// compiler, version standard, optimization, shows warnings about errors, names the file test