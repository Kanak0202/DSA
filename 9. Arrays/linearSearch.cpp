#include<iostream>
using namespace std;
bool search(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return 1;
        }
    }
    return 0;
}
int main(){
     int size;
    cin>>size;
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    if(search(arr, size, num)){
        cout<<"Number found";
    }
    else{
        cout<<"Number not found";
    }
}