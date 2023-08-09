#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int sum=0,prod=1;
    //sum of digits
    while(n!=0){
        int r = n%10;
        n=n/10;
        sum = sum+r;
        prod = prod*r;
    }
    cout<<prod-sum<<endl;
}