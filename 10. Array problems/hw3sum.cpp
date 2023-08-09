#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1; j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                vector<int> temp;
                if(arr[i] + arr[j] + arr[k] == K){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}
int main(){
    int size;
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }
    int num;
    cin>>num;
    cout<<"Triplets for sum "<<num<<" are: "<<endl;
}