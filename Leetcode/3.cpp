#include <iostream>
using namespace std;

int main() {
    string s = "abcabcbb";

    int freq[256] = {0};

    int l = 0, ans = 0;

    for (int r = 0; r < s.size(); r++) {

        freq[s[r]]++;

        while (freq[s[r]] > 1) {
            freq[s[l]]--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans;
}