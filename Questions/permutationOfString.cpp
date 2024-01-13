#include<bits/stdc++.h>
using namespace std;

void solve(string &str, int index, vector<string>& ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i = index; i<str.length();i++){
        swap(str[index], str[i]);
        solve(str, index+1, ans);
        swap(str[i], str[index]);
    }
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    string str = "abc";
    vector<string> ans;
    ans = generatePermutations(str);
    int i=0;
    while(i<ans.size()){
        cout<<ans[i]<<" ";
        i++; 
    }
    return 0;
}