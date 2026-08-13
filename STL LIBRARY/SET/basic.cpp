#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(4);
    s.insert(5);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // set automatically sort them and only take unique elements
    s.erase(5);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // if element is not present in the set then it return the end() iterator it can be garbage value or anything

    auto ie = s.find(4);
    cout << *ie << endl;
    auto it = s.find(25);

    if (it != s.end())
    {
        cout << "Found : " << *it;
    }
    else
    {
        cout << "Not Found";
    }

    auto is = s.end();
    cout << *is << endl;

    auto i = s.begin();
    cout << *i << endl;
    ;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
    for(auto it:s)
    {
        cout<<it<<" ";
    }
// this feture is in the c++ 17 version 

//     if(auto it = s.find(10); it != s.end())
// {
//     cout << "Found";
// }
}