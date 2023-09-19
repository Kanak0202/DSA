#include<iostream>
using namespace std;

int main() {
    string str = "The sky is blue";
    int len = str.length();
    cout<<len<<endl;
    int i = len;
    string s = "";
    while(i>=0){
        if(str[i]==' ' || i==0){
            int l = len - i-1;
            if(i>0){
                s.append(str.substr(i+1, l)+" ");
            }else if(i==0){
                s.append(str.substr(i, l+1));
            }
            len = i;
        }
        
        i--;
    }
    cout<<s<<endl;
    return 0;
}