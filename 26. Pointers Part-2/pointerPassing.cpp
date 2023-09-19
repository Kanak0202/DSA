#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;//prints address
    cout<<*p<<endl;//prints value
}

void update(int *p){
    *p = 6;
    cout<<"New value: "<<*p<<endl;
}

int main(){
    int value = 5;
    int *p = &value;

    print(p);
    update(p);
    cout<<"Value in main: "<<*p<<endl;
}