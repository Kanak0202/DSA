#include<iostream>
using namespace std;
int main(){
    int i,j,n;//n=no. of rows
    cin>>n;
    int count = 1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}