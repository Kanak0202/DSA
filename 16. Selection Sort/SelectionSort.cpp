#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    printArr(arr,n);
}


int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int element;
    for(int i=0;i<n;i++){
        
        cin>>element;
        arr.push_back(element);
    }
    SelectionSort(arr,n);
    
}
