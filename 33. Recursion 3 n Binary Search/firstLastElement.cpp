#include<iostream>
using namespace std;

void print(int mid){
    cout<<mid<<endl;
}

bool binarySearch(int *arr, int s, int e, int key){
    int mid = s + (e-s)/2;
    // print(mid);
    //BASE CASE
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(key<arr[mid]){
        return binarySearch(arr, s, mid-1, key);
    }else{
        return binarySearch(arr, mid+1, e, key);
    }
}

int main(){
    int arr[5] = {1,2,3,5,6};
    bool ans = binarySearch(arr,0, 4, 1);
    cout<<endl;
    cout<<ans;
}