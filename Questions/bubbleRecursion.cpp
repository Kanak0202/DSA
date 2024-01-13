#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}

int main(){
    int arr[10] = {1,6,2,9,3,1,1,2,1,5};
    int n = 10;
    bubbleSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}