#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
vector<string> words ={"adcw","baz","foo","bar","xtfn","abcdef"};
for(int i = 0 ; i<words.size();i++)
{cout<<",";
    for(int j = 0 ; j<words[0].size()-1;j++)
    {
      cout<<words[i][j];
    }
}
return 0;
}