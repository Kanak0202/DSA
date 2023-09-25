#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation and processing
    return n * factorial(n-1);
}

int main(){
    int num;
    cin>>num;
    int ans = factorial(num);
    cout<<"Factorial of "<<num<<" is: "<<ans;

}