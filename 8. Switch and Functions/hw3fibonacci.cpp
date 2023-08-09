#include<iostream>
using namespace std;
int fibonacciTerm(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int term1 = 0;
    int term2 = 1;
    int i=3;
    int term =0;
    if(n>2){
        for(i=3;i<=n;i++){
            term = term1+term2;
            term1 = term2;
            term2 = term;
        }
        return term;
    }
}
int main(){
    int n;
    cin >> n;
    cout<<fibonacciTerm(n);
}