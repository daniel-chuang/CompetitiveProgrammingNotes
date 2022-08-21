// Setup
// #include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

// Shortening code using typedef
typedef long long ll;
typedef long double ld;
typedef vector<int> vi; // Can also be used for more advanced types
typedef pair<int, int> pi;
typedef vector<pi> vp;

// Shortening code using macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

// buggy macro
#define SQbug(a) a*a
#define SQ(a) (a)*(a)

// Macros can also take parameters
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define print(thing) cout << thing << "\n"

// The main loop
int main() {
  // Original
  long long a = 12345123;
  long long b = 13123;
  cout << a*b << "\n";

  // Shortened
  ll c = 123453;
  ll d = 13123123;
  cout << c*d << "\n";

  // Original
  vector<pair<int, int> > v;
  int y1 = 4, x1 = 2, y2 = 5, x2 = 7;
  v.push_back(make_pair(y1,x1));
  v.push_back(make_pair(y2,x2));
  int e = v[0].first+v[1].second;
  cout << e << "\n";

  // Shortened
  vp u;
  int a1 = 4, b1 = 2, a2 = 5, b2 = 7;
  u.PB(MP(a1,b1));
  u.PB(MP(a2,b2));
  int f = u[0].F+v[1].S;
  cout << f << "\n\n";

  // Original
  for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
  }

  // Shortened
  REP(i, 1, 5) {
    print(i);
  }

  // Macros may cause subtle bugs
  print(SQbug(3+3)); // is 3 + 3*3 + 3
  print(SQ(3+3)); // is (3+3) * (3+3)
}

// g++ -std=c++11 -O2 -Wall test.cpp -o test