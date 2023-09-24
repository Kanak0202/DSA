#include<iostream>
using namespace std;

int a = 12;
void f1(int n){
    cout<<a<<" In f1"<<endl;
}
void f2(int k){
    cout<<a<<" In f2"<<endl;
}

int main(){
    int n=5;
    cout<<a<<" In main"<<endl;
    f1(n);
    f2(a);
    a++;
    f2(n);
}