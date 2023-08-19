#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(vector<int> &arr, int m){
    int s=m,e=arr.size()-1;
    int n=arr.size();
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    printArr(arr,n);
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector <int> arr;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    reverseArray(arr,m);
}