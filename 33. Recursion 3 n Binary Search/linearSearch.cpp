#include<iostream>
using namespace std;

void print(int *arr, int size){
    cout<<arr[0]<<" "<<size<<endl;
}

bool search(int *arr, int size, int key){
    print(arr, size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return search(arr+1, size-1, key);
    }
}

int main(){
    int arr[5] = {1,2,3,5,6};
    bool ans = search(arr, 5, 6);
    cout<<ans;
}