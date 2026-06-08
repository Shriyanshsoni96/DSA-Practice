#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
vector<string> words ={"adcw","baz","foo","bar","xtfn","abcdef"};
for(int i = 0 ; i<words.size();i++)
{
        for(int j = 0 ; j<words[i].size();j++)
    {
      cout<<words[i][j];
    }
    cout<<endl;
}
return 0;
}