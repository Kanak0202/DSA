#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int total = 0;
    for(int i=0;i<n;i++){
        if(mid<arr[i]){
            total += arr[i] - mid;
        }
    }
    return total >= k;  // Return true if enough wood can be collected
}

int toCut(int arr[], int n, int k){
    int s = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
    }
    int e=maxi;
    int ans=-1;
    while(s<=e){
        int mid = s + (e-s)/2; // Calculate mid inside the loop
        if(isPossible(arr, n, k, mid)){
            ans=mid;
            s = mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int N = 5; // Number of trees
    int M = 20; // Required wood amount
    int arr[] = {4,40,42,26,46}; // Heights of trees

    cout<<"Maximum height to cut is: "<<toCut(arr, N, M);
    return 0;
}
