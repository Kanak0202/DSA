//Initialization technique
#include<iostream>
using namespace std;

int main(){
    // int *p = 0;
    // cout<<*p;

    /*int i = 5;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q = 0;
    q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;*/

    /*int num = 5;
    int a = num;
    a++;
    cout<<"num for a: "<<num<<endl;

    int *p = &num;
    cout<<"num before: "<<num<<endl;
    (*p)++;
    cout<<"num after: "<<num<<endl;
    cout<<endl;
    cout<<endl;
    int *q = p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;*/

    //IMPORTANT CONCEPT
    int i = 5;
    int *t = &i;
    cout<<"Before address"<<t<<endl;
    cout<<*t<<endl;
    t = t+1;
    cout<<"After address"<<t<<endl;
    cout<<*t; //gives garbage value now

}