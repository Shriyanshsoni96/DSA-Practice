#include<bits/stdc++.h>
    
  
using namespace std;
int main(){
vector<vector<int>> intervals ={{1,6},{2,3},{8,10},{15,18}};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++) {

            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];
            int lastEnd = ans[ans.size() - 1][1];
            if(currentStart <= lastEnd) {
                ans[ans.size() - 1][1] =
                    max(lastEnd, currentEnd);
            }
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ;
}