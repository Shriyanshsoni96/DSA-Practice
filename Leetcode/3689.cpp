#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {1,3,2};
    int k = 2;

    int mn = INT_MAX;
    int mx = INT_MIN;

    for(auto i : nums) {
        mn = min(mn, i);
        mx = max(mx, i);
    }

    long long ans = 1LL * (mx - mn) * k;

    cout << mx << endl;
    cout << mn << endl;
    cout << ans << endl;

    return 0;
}