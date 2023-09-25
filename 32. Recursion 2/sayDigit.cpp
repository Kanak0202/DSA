#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //BASE CASE
    if(n==0){
        return;
    }
    
    //Processing
    int digit = n%10;
    n = n/10;
    sayDigit(n, arr);
    cout<<arr[digit]<<" ";
}


int main(){
    int num;
    cin>>num;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(num, arr);
}