#include<iostream>
using namespace std;

int main(){
    int arr[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int num;
    cin>>num;
    while(num--){
        int ele;
        cin>>ele;
        //fetch
        cout<<ele<<" "<<hash[ele]<<endl;
    }
}