#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m, vector<int>(n));

        int total = m * n;
        k %= total;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int index = i * n + j;

                int newIndex = (index + k) % total;

                int newRow = newIndex / n;
                int newCol = newIndex % n;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
int main(){

   vector<vector<int>> grid ={{1,2,3},{4,5,6},{6,7,8}};
   int k = 1;
   shiftGrid(grid, k);
    }

