#include<iostream>
using namespace std;
//My approach
int arrSwapAlt(int arr[], int size){
    int i=0;
    for(i=0;i<size;i++){
        if(i%2==0 && i!=size-1){
            swap(arr[i], arr[i+1]);
        }
        else{
            continue;
        }
    }
}
//Sir's approach
int altSwap(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cin>>size;
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArray(arr, size);
    cout<<endl;
    // arrSwapAlt(arr, size);
    altSwap(arr,size);
    printArray(arr, size);
}