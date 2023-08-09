#include<iostream>
using namespace std;

// My approach -- Brute Force
int findUnique(int arr[], int size){
    int num=0;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            num = arr[i];
        }
    }
    return num;
}

//Sir's Approach --> Using XOR
int findUniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int size;
    cin>>size;
    int arr[10];
    if(size%2!=0){
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    else{
        cout<<"Size must be odd"<<endl;
    }
    cout<<"Unique number: "<<findUniqueElement(arr, size);
}