#include<iostream>
using namespace std;

//Wrong Solution

int peakElement(int arr[], int n){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = arr[mid];
    int ans1 = mid;
    while(start<=end){
        end = mid - 1;
        mid = start + (end-start)/2;
        if(arr[mid]>ans){
            ans = arr[mid];
            ans1 = mid;
        }
    }
    return ans1;
    
}

int main(){
    int arr[4] = {0,2,1,0};
    cout<<"Peak Element: "<<peakElement(arr, 4);
    return 0;
}