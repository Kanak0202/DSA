#include<iostream>
using namespace std;

int main(){
    char ch[6] = "abcde";
    cout<<ch<<endl; //prints abcde

    char *c = &ch[0];
    cout<<c<<endl; //prints abcde
}