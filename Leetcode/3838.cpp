#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> words = {"abcd","def","xyz"};

    vector<int> weights =
    {5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};

    string result = "";

    for(int i = 0; i < words.size(); i++)
    {
        int sum = 0;

        for(int j = 0; j < words[i].size(); j++)
        {
            char ch = words[i][j];

            int position = ch - 'a';

            sum += weights[position];
        }

        int mod = sum % 26;

        char mapped = 'z' - mod;

        result.push_back(mapped);
    }

    cout << result;

    return 0;
}