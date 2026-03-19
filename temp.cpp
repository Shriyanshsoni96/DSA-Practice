#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "ILoveIndia";
    string s2 = " ";

    for(int i =0;i<s.length();i++){
        if(isupper(s[i])){
            s2.push_back(s[i]);
        }
    }
    cout<<s2;
}