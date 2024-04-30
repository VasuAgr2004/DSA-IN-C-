// used to store key-value pairs 
// an associative array 
#include<iostream>
#include<map>
#include<string>
using namespace std; 

int main(){
    map <string,int> marks;
    marks["Vasu"] = 90;
    marks["rohan"] = 56;
    marks["Sunil"] = 80;

    marks.insert({{"Honey",67},{"Jimmy",89}});
    map<string,int> :: iterator iter;
    for (iter = marks.begin(); iter!= marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n"; // will get key and value as first and second respectively 
    } 
    
    return 0;
}