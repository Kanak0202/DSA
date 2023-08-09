#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n;
    cin>>n;
    for(i=n-1;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(k=1;k<=n-i;k++){
            cout<<k<<" ";
        }
        for(l=1;l<=n-i-1;l++){
            int x=n;
            x = x-1;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}