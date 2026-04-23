#include <bits/stdc++.h>
using namespace std;

bool isValid(long long x, long long n, int k) {
    long long result = 1;

    for (int i = 0; i < k; i++) {
        if (result > n / x) return false; // avoid overflow
        result *= x;
    }

    return result <= n;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n;
        int k;
        cin >> n >> k;

        long long low = 1, high = n, ans = 1;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (isValid(mid, n, k)) {
                ans = mid;
                low = mid + 1; // try bigger
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}