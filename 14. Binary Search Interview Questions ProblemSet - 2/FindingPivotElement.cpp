#include<iostream>
using namespace std;

int FindPivot(int arr[], int n){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[5] = {5, 6, 7, 1, 2};
    cout<<"Pivot element is at index: "<<FindPivot(arr, 5);
    return 0;
}