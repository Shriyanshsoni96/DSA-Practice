#include <algorithm>   // sort, find, binary_search, swap, reverse, etc.
#include <numeric>     // accumulate, partial_sum, iota, gcd, lcm
#include <vector>      // vector and all its methods
#include <cmath>       // sqrt, pow, abs, floor, ceil, log, etc.

int main (){ 
    vector<int> v ={1, 2, 3, 4, 5, 6};

    
sort(v.begin(), v.end());                        // ascending
sort(v.begin(), v.end(), greater<int>());        // descending
*max_element(v.begin(), v.end());                // max value
*min_element(v.begin(), v.end());                // min value
accumulate(v.begin(), v.end(), 0);               // sum
lower_bound(v.begin(), v.end(), x) - v.begin(); // index of x (sorted)
count(v.begin(), v.end(), x);                    // frequency of x
reverse(v.begin(), v.end());                     // reverse
unique + erase to remove duplicates
next_permutation(v.begin(), v.end());            // iterate permutations

}