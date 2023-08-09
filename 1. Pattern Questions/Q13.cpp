#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;  
    char ch = 'A'-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            ch = ch+1;
            cout<<ch<<" ";
        }
        cout<<endl;
    } 
}