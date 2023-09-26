#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+getSum(arr+1, size-1);
}

int main(){
    int arr[6] = {1,2,3,5,5,77};
    int sum = getSum(arr, 6);
    cout<<sum;
}