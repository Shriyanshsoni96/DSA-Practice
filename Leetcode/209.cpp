#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> num = {2,3,1,2,4,3};
    int target = 7;

    int left = 0;
    int sum = 0;
    int ans = INT_MAX;

    for(int right = 0; right < num.size(); right++) {
        sum += num[right];

        while(sum >= target) {
            ans = min(ans, right - left + 1);
            sum -= num[left];
            left++;
        }
    }

    if(ans == INT_MAX) cout << 0;
    else cout << ans;

    return 0;
}


