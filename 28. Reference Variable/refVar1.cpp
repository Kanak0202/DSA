#include<iostream>
using namespace std;

int update(int n){
    n++;
    return n;
}

int update2(int &n){
    n++;
    return n;
}

// int& update3(int  n){ //BAD PRACTICE
//     int num = n;
//     int &ans = num;
//     return ans;
// }

int main(){
    int i=5;
    // int &j = i;

    cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<&i<<endl;
    // cout<<&j<<endl;
    
    // cout<<update(i)<<endl;
    // cout<<i<<endl;

    // cout<<update2(i)<<endl;
    // cout<<i<<endl;

    cout<<update3(i)<<endl;


}