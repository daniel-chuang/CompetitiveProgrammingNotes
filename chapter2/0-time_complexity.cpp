#include <iostream>
using namespace std;

// MACROS
#define LOOP(i, n) for (int i = 0; i < n; i++)

// Big O notation

int main() {
  int n = 10;

  // O(n)
  LOOP(i, n) {
    cout << i;
  }

  // O(n^2)
  LOOP(i, n) {
    LOOP(j, n) {
      cout << i << " " << j << endl;
    }
  }

  // Orders of magnitude
  // Not precise, more about scale
  // Still all O(n)
  for (int i = 1; i <= 3*n; i++) {
    cout << i;
  }

  for (int i = 1; i <= n+5; i++) {
    cout << i;
  }

  for (int i = 1; i <= n; i += 2) {
    cout << i;
  }

  // This would be O(n^2)
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      cout << i << " " << j << endl;
    }
  }

  // For an algo with multiple phases, the largest time complexity
  // is the total time complexity because that is usually the
  // bottleneck

  // For example, this would be O(n^2)
  for (int i = 1; i <= n; i++) {
    cout << i;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << i << " " << j << endl;
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << i;
  }

  return 0;
}

// For recursion, it depends on how many times the function is called
// and the time complexity of a single call

// This would have n function calls, with each being O(1), so it is
// O(n)
void f(int n) {
  if (n==1) return;
  f(n-1);
}

// O(2^n)
// g(n) has one call
// g(n-1) is 2 calls
// g(n-2) is 4 calls
// g(n-3) is 8 calls
void g(int n) {
  if (n==1) return;
  g(n-1);
  g(n-1);
}