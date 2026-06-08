#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;


int main() {
   vector<vector<int>> a = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
   int col=a[0].size()-1;
  cout<<col;
  cout<<a.size();
    return 0;
}