#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" "<<" ";
        }
        for(k=i;k<=n;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}