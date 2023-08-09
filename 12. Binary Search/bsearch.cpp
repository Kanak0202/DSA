#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16}; 

    cout<<"The index of 18 is: "<<binarySearch(even, 6, 18)<<endl;
    cout<<"The index of 12 is: "<<binarySearch(odd, 5, 12)<<endl;

    return 0;
}