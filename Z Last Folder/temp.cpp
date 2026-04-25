#include <iostream>
using namespace std;

int furthestDistance(string moves) {
    int L = 0, R = 0, blank = 0;

    for(char ch : moves) {
        if(ch == 'L') L++;
        else if(ch == 'R') R++;
        else blank++;
    }

    int right = R + blank - L;
    int left = L + blank - R;

    return max(abs(right), abs(left));
}

int main() {
    string moves = "L_RL__R";
    cout << furthestDistance(moves);
    return 0;
}