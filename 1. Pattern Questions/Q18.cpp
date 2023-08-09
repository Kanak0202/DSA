#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=0;k<=i;k++){
            cout<<" ";
        }
        for(j=n;j>i-1;j--){
            cout<<"X";
        }
        
        cout<<endl;
    }
}