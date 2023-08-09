#include<iostream>
using namespace std;
int setBits(int n){
    int count = 0;
    while(n!=0){
        count++;
        n = n&(n-1);
    }
    return count;
}
int main(){
    int a,b;
    cin >> a>>b;
    // cout<<setBits(a)<<" "<<setBits(b);
    int total = setBits(a)+setBits(b);
    cout<<total;
}