#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    //base case- already sorted
    if(n==0 || n==1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}

int main(){
    int arr[10], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}