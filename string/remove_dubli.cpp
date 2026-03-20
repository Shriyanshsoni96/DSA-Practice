#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s="aabaccbaedded";
    sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            if(s[i] != s[j])
            {
                break;
            }
            else{
                s.erase(j, 1);
                j--; 
            }
        }
    }

    cout << s;
    return 0;
}