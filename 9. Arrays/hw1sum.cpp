#include<iostream>
using namespace std;
int term(int n){
    int ans = 3*n+7;
    return ans;
}
int main(){
    int size;
    cin>>size;
    int arr[10];
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum;
}