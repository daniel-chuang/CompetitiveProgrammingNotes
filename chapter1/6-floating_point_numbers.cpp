// Setup
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// The main loop
int main() {
  // Typical float types are:
  // 64-bit double
  // 80-bit long double
  // In most cases, double is enough, but long double is more accurate

  // Prints value of x with 9 decimal places
  double x = 1235142512341.23441234012;
  printf("%.6f\n", x);

  // Floating point inaccuracies are present
  double y = 0.3 * 3 + 0.1; // expect for x = 1.0
  printf("%.20f\n", y); // 0.9999999999999999...898

  // As such, never use == for floats, rather, use this:
  double z = 1.0;
  if (abs(y-z) < 1e-9) {
    cout << "a and b are equal\n";
  }

  return 0;
}

// g++ -std=c++11 -O2 -Wall test.cpp -o test