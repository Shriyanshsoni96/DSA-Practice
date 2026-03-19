#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
string frequency(string s)
{     sort(s.begin(),s.end());

        string ans ;
        
        ans=s[1];

        int max=INT_MIN;

     for(int i = 0 ; i < s.size(); i++)
    {
        int count = 1;
        for(int j = i+1 ; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
                    count++;
            }
        }

        if(max<count)
        {
            max=count;
            ans=s[i];
        }

        i = i + count - 1;
    }

    return ans;
}
int main(){
    string s;
    cin>>s;

    string ans=frequency(s);
    cout<<ans;
    return 0;
}