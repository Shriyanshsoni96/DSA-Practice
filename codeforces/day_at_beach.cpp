#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    vector<int> prefixMax(n), suffixMin(n);

    // prefix max
    prefixMax[0] = h[0];
    for(int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i-1], h[i]);
    }

    // suffix min
    suffixMin[n-1] = h[n-1];
    for(int i = n-2; i >= 0; i--) {
        suffixMin[i] = min(suffixMin[i+1], h[i]);
    }

    int blocks = 1; // at least 1 block
    for(int i = 0; i < n-1; i++) {
        if(prefixMax[i] <= suffixMin[i+1]) {
            blocks++;
        }
    }

    cout << blocks << endl;
}