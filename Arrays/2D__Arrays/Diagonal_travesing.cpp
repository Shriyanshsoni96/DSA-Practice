#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
    
    vector<int> result;
    
    for (int d = 0; d < m + n - 1; d++) {
        vector<int> temp;
        
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;
        
        // collect elements of this diagonal
        while (row < m && col >= 0) {
            temp.push_back(mat[row][col]);
            row++;
            col--;
        }
        
        // reverse for even diagonals
        if (d % 2 == 0) {
            reverse(temp.begin(), temp.end());
        }
        
        // add to result
        for (int x : temp) {
            result.push_back(x);
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    
    vector<int> ans = findDiagonalOrder(mat);
    
    for (int x : ans) {
        cout << x << " ";
    }
}