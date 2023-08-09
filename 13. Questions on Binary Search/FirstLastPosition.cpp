#include<iostream>
using namespace std;


int firstOccurence(int arr[], int n, int key){
    int start = 0, end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
        ans = mid;
        start=mid+1;
    }
    else if(arr[mid]>key){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    mid = (start+end)/2;
    }
    return ans;
}


int main(){
    int even[8] ={1, 1, 1, 2, 2, 2, 2, 2 };
    int key = 2;
    cout<<"First occurence of "<<key<<" is at index: "<<firstOccurence(even, 8, key)<<endl;
    cout<<"Last occurence of "<<key<<" is at index: "<<lastOccurence(even, 8, key);
    return 0;
}