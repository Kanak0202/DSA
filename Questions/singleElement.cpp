#include<iostream>
using namespace std;

int single(int *arr, int n){
    for(int i=0;i<n;i++){
        int num = arr[i];
        int count = 0;
        for(int j=0;j<n;j++){
            if(num == arr[j]){
                count++;
            }
        }
        if(count==1){
            return num;
        }
    }
    return -1;
}

int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<single(arr, n);
}