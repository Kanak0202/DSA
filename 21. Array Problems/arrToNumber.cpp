#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int arrToNum(vector<int> &arr, int n){
    int num=0;
    int powerOfTen=1; 
    for(int i=n-1;i>=0;i--){
        int x = arr[i]*powerOfTen;
        num = num+x;
        powerOfTen*=10;
    }
    return num;
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int numToArr(int num, int n){
    int arr[n];
    for(int i=n-1;i>=0;i--){
        arr[i] = num%10;
        num=num/10;
    }
    printArr(arr,n);
}

int main(){
    int n;
    cin>>n;
    int element =  0;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    int newnum = arrToNum(arr,n);
    cout<<newnum;
    numToArr(newnum,n);
}