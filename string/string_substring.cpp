#include <iostream>
using namespace std;

int countPalindromes(string s) {
    int n = s.size();
    int count = 0;

    // Expand around center
    for (int center = 0; center < n; center++) {

        // Odd length palindromes (center at one char)
        int left = center, right = center;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }

        // Even length palindromes (center between two chars)
        left = center;
        right = center + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string s = "abc";
    cout << "Total Palindromic Substrings: " << countPalindromes(s);
    return 0;
}