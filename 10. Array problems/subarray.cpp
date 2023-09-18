#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        for(int j=i;j<8;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
