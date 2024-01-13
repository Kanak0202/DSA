#include<iostream>
using namespace std;

void insertionSort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int temp = arr[start+1];
    int j = start;
    for(; j>=0;j--){
        if(arr[j]>temp){
            arr[j+1] = arr[j];
        }else{
            break;
        }
    }
    arr[j+1] = temp;
    insertionSort(arr, start+1, end);
}

int main(){
    int arr[10] = {1,6,2,9,3,1,1,2,1,5};
    int n = 10;
    insertionSort(arr, 0, 9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}