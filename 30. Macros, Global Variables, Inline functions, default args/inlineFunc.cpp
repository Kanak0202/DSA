/*NOTE- Inline functions work if function body is of one line, if 2-3 lines may or may not work, if more than 3 will not work*/

#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b) ? a : b;
}

int main(){
    int a = 2, b=3;
    int ans = 0;
    ans = getMax(a,b);
    cout<<"Answer is: "<<ans<<endl;
    a = a+5;
    b = b-2;
    ans = getMax(a,b);
    cout<<"Answer is: "<<ans<<endl;
}