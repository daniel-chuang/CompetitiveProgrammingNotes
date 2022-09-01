// Setup
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
using namespace std;

// Code
int main() {
    // Vectors
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end()); // outputs {2, 3, 3, 4, 5, 5, 8}
    for (int i : v) {
        cout << i << " "; 
    }
    cout << endl;


    sort(v.rbegin(), v.rend()); // outputs {8, 5, 5, 4, 3, 3, 2}
    for (int i : v) {
        cout << i << " "; 
    }
    cout << endl;

    // Array
    int n = 7;
    int a[] = {4, 2, 5, 3, 5, 8, 3};
    sort(a, a+n);
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    // String
    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << endl;

    // Pairs
    vector<pair<int,int>> z;
    z.push_back({1,5});
    z.push_back({2,3});
    z.push_back({1,2});
    sort(z.begin(), z.end());
    for (int i = 0; i < z.size(); i++) {
        cout << z[i].first << " " << z[i].second << ", ";
    }
}