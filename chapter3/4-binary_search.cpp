// Set up
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Main
int main() {
    // A normal search for something looks like this (O(n) time):
    int arr[] = {1, 1, 4, 3};
    int n = 4; // Size of the array
    int z = 3; // What you are searching for
    for (int i = 0; i < n; i++) {
        if (arr[i] == z) {
            cout << i << endl;
        }
    }

    // Binary search can be performed on a list that is sorted, with O(log n) time
    sort(arr, arr + n); // sorts the array
    int a = 0, b = n-1; // the first subarray is the entire array
    while (a <= b) {
        int k = (a+b) / 2; // Checks if the middle is the correct answer
        if (arr[k] == z) {
            cout << k << endl;
        }
        if (arr[k] > z) b = k-1; // Checks if the middle is greater than the item being searched, and adjusts b to halve the search space downwards
        else a = k+1; // Otherwise, the middle is lower than the item being searched, so it adjusts a to halve the search space upwards
    }

    // Another method of using binary search that is also O(log n) time
    int j = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (j+b < n && arr[j+b] <= z) j += b; // if k + jump doesn't go out of the array AND arr[k+jump] <= z, then jump k by b
    }
    if (arr[j] == z) {
        cout << j << endl; 
    }

    // lower_bound returns a pointer to the first array element whos value is at least x
    // upper_bound returns a pointer to the first array element whos value is larger than x
    // equal_range returns both above pointers
    // THESE FUNCTIONS ASSUME THAT THE ARRAY IS SORTED
    // If ther eis no such element, the pointer points to the element after the last array element
    z = 4;
    auto k = lower_bound(arr, arr + n, z)-arr;
    if (k<n && arr[k] == z) {
        cout << k << endl;
    }
}