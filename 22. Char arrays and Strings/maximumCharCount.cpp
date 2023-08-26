#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
    {
        // Your code here
        int max=0;
        char ch, newch;
        for(int i=0;i<str.length();i++){
            int count=0;
            for(int j=0;j<str.length();j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            cout<<count<<endl;
            if(count>max){
                max=count;
                ch = str[i];
            }else if(count==max){
                if(str[i]<ch){
                    ch=str[i];
                }
            }
        }
        return ch;
    }

int main(){
    string s;
    cin >> s;
    cout<<getMaxOccuringChar(s);
}