#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int> ump;

    //insertion
    //1
    pair<string, int> p = make_pair("babbar", 3);
    ump.insert(p);

    //2
    pair<string, int> p2("love", 2);
    ump.insert(p2);

    //3
    ump["mera"] = 1;
    //value will be replaced --> updation
    ump["mera"] = 10;

    //Searching
    cout<<ump["mera"]<<endl;
    cout<<ump.at("love")<<endl;
    // cout<<ump.at("unknown")<<endl;
    // cout<<ump["unknown"]<<endl;

    //size
    cout<<ump.size()<<endl;

    //to check presence
    cout<<ump.count("bro")<<endl;

    //erase
    ump.erase("mera");
    cout<<ump.size()<<endl;

    //iterator
    unordered_map<string, int> :: iterator it = ump.begin();
    while(it!=ump.end()){
        cout<<it->first<<"->"<<it->second<<endl;
        it++;
    } 
    return 0;
}