#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "liom";
    stack<char> s;
    for(int i = 0;i<str.length();i++){
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty()){
        char ch = s.top();
        ans+=ch;
        s.pop();
    }
    cout<<ans;

}