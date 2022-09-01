// Setup
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Main loop
struct P {
    int x, y;
    bool operator<(const P &p) {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};

bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {
    P myP = {5, 2};
    P myP2 = {2, 5};
    cout << myP.x << " " << myP.y << endl;
    cout << myP2.x << " " << myP2.y << endl;
    cout << (myP < myP2) << endl;
    cout << (myP2 < myP) << endl;
    cout << (myP < myP) << endl;

    string aa = "testing1";
    string bb = "testing1234";
    string cc = "testing123123123123";
    vector<string> v = {aa, cc, bb};
    sort(v.begin(), v.end(), comp);
    for (string s : v) {
        cout << s << " ";
    }

    sort(v.rbegin(), v.rend(), comp);
    for (string s : v) {
        cout << s << " ";
    }

}