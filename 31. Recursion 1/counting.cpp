#include<iostream>
using namespace std;

void counting(int n){
    //base case
    if(n==0){
        return;
    }
    //Tail Recursion
    /*cout<<n<<endl;
    //recursive relation
    counting(n-1);*/

    //HEAD RECURSION
    //recursive relation
    counting(n-1);
    cout<<n<<endl;
}


int main(){
    int num;
    cin>>num;
    cout<<endl;
    counting(num);
}