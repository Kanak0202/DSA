#include<iostream>
using namespace std;

int fibonacciTerm(int n){
    //BASE CASE
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    return fibonacciTerm(n-2)+fibonacciTerm(n-1); 
}


int main(){
    int term;
    cin>>term;
    
    cout<<"Term no. "<<term<<" is: "<<fibonacciTerm(term);

}