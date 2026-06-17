#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
  char processStr(string s, long long k) {
        string result;

for(char i: s )
{
    if(i == '*' )
    {
      if(!result.empty()) result.pop_back();
    }
    else if(i=='#')
    {
        result += result ;
    }
   else if(i=='%')
   {
      reverse(result.begin(),result.end());
    }
   else{
    result.push_back(i);
   }
}
if(k>=result.size())
{
    return '.';
}
else 
{
    return result[k];
}
    }

int main(){

string s={"z*#"};
cout<<processStr(s,0);
return 0;

}