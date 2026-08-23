#include<iostream>
#include<map>
using namespace std;
int main(){
map<string , int > marks;

// insertion of values in the map
//type 1  
marks["ram"]=45;
marks["rahul"]=46;
marks["hemant"]=34;
marks["rakesh"]=48;

//type 2
marks.insert({"uday",47});
marks.insert({"rajesh",51});

// type 3 
marks.insert(pair<string, int> ("ramu",52) );

// For Accessing the values 
cout<<marks["uady"]<<" "<<endl;
//isme jab humne koi new valuse ka output pucha toh usne directly ek new key create
// krdi he or uski value by default 0 he 

// iterator for accesing all the values
for(auto i : marks)
{
    cout<<i.first<<" "<<i.second<<endl;
    //in the maps every key is UNIQUE & sorted in LEXOGRAPHIC order 
}

//deletion
marks.erase("uady");
// this will delte the key as welll as there values.

// Finding
if(marks.find("rajesh") != marks.end())
{
    cout<<"Found"<<endl;
    cout<<marks.count("rajesh")<<endl;// isne batays i kitne rajesh he isme 
}
else
{cout<<"Not Found"<<endl;}
// Time Complexity for all the access , insertion , deletion , finding is O(Logn)


return 0;
}