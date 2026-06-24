#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canPlace(vector<int>& stalls, int cows, int dist) {
    int count = 1;
    int lastPos = stalls[0];

    for(int i = 1; i < stalls.size(); i++) {
        if(stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i];
        }

        if(count >= cows) return true;
    }
    return false;
}

int main() {
    vector<int> stalls = {1, 4, 2, 9, 8};
    int cows = 3;

    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(canPlace(stalls, cows, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans;
}