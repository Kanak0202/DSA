#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int val = 0;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<" "<<" ";
        }
        for(k=1;k<=i;k++){
            val++;
            cout<<val<<" ";
        }
        cout<<endl;
    }
}