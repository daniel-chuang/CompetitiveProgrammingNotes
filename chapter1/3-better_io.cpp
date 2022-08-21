// Imports
// Includes everything in the standard library
#include <bits/stdc++.h>

// Makes it so that you don't need to do std::
using namespace std;

// The main loop
int main() {

  // Using files for inputs and outputs
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  // Makes io more efficient
  ios::sync_with_stdio(0);
  cin.tie(0);

  // reading whole lines from the input
  cout << "Input a string (can include spaces)" << "\n";
  string s;
  getline(cin, s);
  cout << s << "\n\n";

  // Note: "\n" works faster than endl
  // scanf and printf, a bit faster but more difficult to use
  cout << "Input 2 integers" << "\n";
  int a, b;
  scanf("%d %d", &a, &b); // make sure nothing is between the %d's
  printf("%d %d\n\n", a, b);

  // Looping inputs
  int x;
  while (cin >> x) {
    cout << x << "\n";
  }

  return 0;
}

// Everything can be compiled with
// g++ -std=c++11 -O2 -Wall test.cpp -o test
// compiler, version standard, optimization, shows warnings about errors, names the file test