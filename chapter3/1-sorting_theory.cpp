// Good visualizer: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/visualize/

// Setup
#include <bits/stdc++.h>
using namespace std;

// The main loop
int main() {
  /*
  Bubble sort O(n^2)
  Consists of n rounds. On each round, algo iterates through the elements of the array
  Whenever two consecutive elements are found that are not in correct order, the algo
  swaps them. The algorithm can be implemented as follows
  */

  for (int i = 0; i < n; i++) { // Looping through every single element
    for (int j = 0; j < n-1; j++) { // Swapping every number before nth.
      if (array[j] > array[j+1]) { // If the element in front is greater than the element before, then swap them
        swap(array[j], array[j+1]);
      }
      // At the end of this loop, the n - ith number is in the correct place
      // After n loops, all numbers are sorted
    }
  }


  /*
  'Inversions' for bubble sort
  Think about the amount of inversion swaps that there will be
  If the array is in the reverse order, the number of inversions is the largest possible:
  1 + 2 + 3 + ... + (n-1) = n(n-1)/2 = O(n^2)

  Merge sort O(n log n)
  Based on recursion
  Sorts a subarray[a...b] as follows:
  1. If a=b, do not do anything, because the subarray is already sorted
  2. Calculate the position of the middle element: k = floor((a+b)/2)
  3. Recursively sort the subarray [a...k]
  4. Recursively sort the subarray [k+1...b]
  5. Merge the sorted subarrays array[a...k] and array[k+1...b] into a sorted subarray[a...b]
  Better explained: https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/visualize/
  This is the fastest sorting algorithm using comparisons.
  The time is log_2(n!) = log_2(1) + log_2(2) + ... + log_2(n)
  Which is approx (n/2) * log(n/2), which is n log n time
  */

  /*
  Counting sort
  n log n lower bound does not apply to algorithms that don't compare array elements, but use a different sort of information.
  There is an algorithm called counting sort that sorts an array in O(n) time assuming that every element in the array is an integer between
  0...c and c = O(n)

  This algorithm creates something called a bookkeeping array, which indices are elements 
  of the original array and calculates how many times each element appears in the array


  Array:             {1, 3, 6, 9, 9, 3, 5, 9}
  Bookkeeping Array: {1, 0, 2, 0, 1, 1, 0, 0, 3}

  Construction of the bookkeeping array takes O(n) time. After this, the sorted array can be created in O(n) time because
  the number of occurrences of each element can be retrieved from the bookkeeping array. Thus, the total time complexity of counting sort is O(n).
  
  So in reality, it takes 2n time.

  This is an extremely efficient algorithm, but can only be used when the array doesn't have elements that get too big, so that the array elements
  can be used as indices in the bookkeeping array.
  */



  return 0;
}

// g++ -std=c++11 -O2 -Wall test.cpp -o test