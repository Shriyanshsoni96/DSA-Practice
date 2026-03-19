#include<iostream>
#include<string>
using namespace std;
string comprerssion(string s)
{     
    string ans;
     for(int i = 0 ; i < s.size(); i++)
    {
        int count = 1;

        for(int j = i+1 ; j < s.size(); j++)
        {
            if(s[i] == s[j])
                count++;
            else
                break;
        }

        ans.push_back(s[i]);
        ans.append(to_string(count));

        i = i + count - 1;
    }

    return ans;
}
int main(){
    string s ="aaabbdccsaa";

    string ans=comprerssion(s);
    cout<<ans;
    return 0;
}