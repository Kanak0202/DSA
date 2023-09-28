#include<iostream>
using namespace std;

//pass by value
void reverse(string s, int st, int e){
    if(st>e){
        return;
    }
    swap(s[st], s[e]);
    st++;
    e--;
    reverse(s,st,e);
}

//pass by reference
void reverseRef(string& s, int st, int e){
    if(st>e){
        return;
    }
    swap(s[st], s[e]);
    st++;
    e--;
    reverseRef(s,st,e);
}

int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    reverse(str, 0, str.length()-1);
    cout<<str<<endl;
    reverseRef(str, 0, str.length()-1);
    cout<<str<<endl;
}