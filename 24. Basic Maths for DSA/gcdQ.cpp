#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int c= gcd(a,b);
    cout<<gcd(a,b);
    return 0;
}

// Important Formulaes
// gcd(a,b) = gcd(a-b, b);
// gcd(a,b) = gcd(a%b, b);
// lcm(a,b) * gcd(a,b) = a * b;