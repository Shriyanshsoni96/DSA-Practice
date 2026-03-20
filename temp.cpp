#include <iostream>
using namespace std;

int maxLen(string s, int k, char ch) {
    int left = 0, count = 0, maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        // Count characters that need to be changed
        if (s[right] != ch) {
            count++;
        }

        // If more than k changes needed, shrink window
        while (count > k) {
            if (s[left] != ch) {
                count--;
            }
            left++;
        }

        // Update maximum length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    int result = max(maxLen(s, k, 'a'), maxLen(s, k, 'b'));
    cout << result;

    return 0;
}