#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string word = "abc";
    vector<string> pattern = {"a", "abc", "bc", "d"};
    int count = 0;
 for (auto i : pattern)
{
    if (word.find(i) != string::npos)
    {
        count++;
    }
}
    
    cout << "Count: " << count << endl;
    return 0;
}