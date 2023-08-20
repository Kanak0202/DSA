#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Rotate(vector<int> &arr,int n){
    vector<int> temp;
    for(int i=1;i<=n;i++){
        temp.push_back(arr[i%n]);
    }
    
    printArr(temp,n);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    Rotate(arr,n);
    // printArr(arr,n);
}