#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++){
        bool swapped= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    printArr(arr,n);
}

int main(){
    int n;
    cin>>n;
    vector <int> arr;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    BubbleSort(arr,n);
}