#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;

char findTheDifference(string s, string t) {
    // Approch 1 ; 
    // int sum = 0;
        // for(char ch : t) {
        //     sum += ch;
        // }
        // for(char ch : s) {
        //     sum -= ch;
        // }
        // return (char)sum;

    // Approch 2 using map
   unordered_map <char, int>mp;
  for(char &ch : s)
  {
    mp[ch]++;
  }
  for(char &ch : t)
  {
    mp[ch]--;
    if(mp[ch] < 0) return ch;
}
  }
    

int main() {
    string s, t;

    cout << "Enter s: ";
    cin >> s;

    cout << "Enter t: ";
    cin >> t;

    cout << findTheDifference(s, t);

    return 0;
}