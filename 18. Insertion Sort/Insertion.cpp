#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertionSort(vector<int> &arr, int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                 break;
            }
        }
        arr[j+1] = temp; 
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
    InsertionSort(arr,n);
}