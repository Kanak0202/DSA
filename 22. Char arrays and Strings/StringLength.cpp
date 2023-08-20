#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s2;
    cin>>s2;
    cout<<s2.length();
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<s2;
}