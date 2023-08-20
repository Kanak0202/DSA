#include<bits/stdc++.h>
using namespace std;

int arrToNum(vector<int> &arr, int n){
    int num=0;
    int powerOfTen=1; 
    for(int i=n-1;i>=0;i--){
        int x = arr[i]*powerOfTen;
        num = num+x;
        powerOfTen*=10;
    }
    return num;
}

void printArr(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int num1 = arrToNum(a,n);
    int num2 = arrToNum(b,m);
    int sum = num1+num2;
    return sum;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector <int> a;
    vector <int> b;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        a.push_back(element);
    }
    for(int i=0;i<m;i++){
        cin>>element;
        b.push_back(element);
    }
    int c;
    c= findArraySum(a,n,b,m);
    cout<<c;
}