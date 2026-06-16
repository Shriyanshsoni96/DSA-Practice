#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string s={"a#b%*"};
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
cout<<result;
return 0;

}