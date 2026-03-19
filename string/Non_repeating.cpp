#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore(); 

    while(t--)
    {
        string s; 
        getline(cin, s);

        bool found = false; // 🌿 flag

        for(int i = 0; i < s.size(); i++)
        {
            int count = 1;

            for(int j = 0; j < s.size(); j++)
            {
                if(i != j && s[i] == s[j])
                {
                    count++;
                }
            }

            if(count == 1)
            {
                cout << s[i] << endl;
                found = true;
                break;
            }
        }

        if(!found)
        {
            cout << -1 << endl;
        }
    }
}