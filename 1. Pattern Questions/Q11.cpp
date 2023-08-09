#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n; 
    // char ch='A'-1;
    for(i=1;i<=n;i++){
        // ch = ch-2;
        for(j=1;j<=n;j++){
            // ch = ch+1;
            // cout<<ch<<" ";
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }  
}