#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j=j-1){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}