#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}