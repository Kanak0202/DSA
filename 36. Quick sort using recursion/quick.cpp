#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[s], arr[pivotIndex]);

    //putting left and right part elements in order
    int i = s, j = e;
    while(i<j){
        if(arr[i]<=pivot){
            i++;
        }else if(arr[j]>=pivot){
            j--;
        }else{
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;

}

void quick_sort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    quick_sort(arr, s, p-1);
    quick_sort(arr, p+1, e);

}

int main(){
    int arr[10] = {9,6,1,4,2,3,9,9,9,10};
    int n = 10;
    quick_sort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}