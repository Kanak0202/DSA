#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            cout<<"  ";
        }
        for(j=n;j>i-1 ;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}