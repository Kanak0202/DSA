#include<iostream>
using namespace std;

int power(int n, int m){
    //base case
    if(m==0){
        return 1;
    }
    //recursive relation and processing
    return n * power(n, m-1);
}


int main(){
    int num, pow;
    cin>>num>>pow;
    int ans = power(num, pow);
    cout<<num<<" raised to the power of "<<pow<<" is: "<<ans;

}