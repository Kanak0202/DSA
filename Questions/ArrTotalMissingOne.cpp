#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> arr;
    int element;
    for(int i=0;i<size;i++){
        cin>>element;
        arr.push_back(element);
    }
    int total=0;
    int size2=size/2+1;
    int temp=arr[0];
    for(int i=0;i<size2;i++){
        total+=temp;
        temp++;
    }
    total = total*2;
    
}