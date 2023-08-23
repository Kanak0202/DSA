#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}
char toLower(char ch){
    char temp;
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else if(ch>='A' && ch<='Z'){
        temp = ch - 'A' + 'a';
        return temp;
    }else{
        return ch;
    }
}
bool validPalindrome(string s){
    int st=0, end=s.length()-1;
    while(st<=end){
        if(s[st]==s[end]){
            st++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    string temp;
    for(int j=0;j<s.length();j++){
        if(isValid(s[j])){
            temp.push_back(s[j]);
        }
    }
    for(int j=0;j<temp.length();j++){
        temp[j] = toLower(temp[j]);
    }
    cout<<temp<<endl;

    cout<<validPalindrome(temp);
}