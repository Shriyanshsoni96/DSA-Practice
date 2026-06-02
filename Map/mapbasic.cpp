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
  

return 0;
}