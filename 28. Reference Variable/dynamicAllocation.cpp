#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
    /*char ch = 'q';
    cout<<sizeof(ch)<<endl;

    char *ptr = &ch;
    cout<<sizeof(ptr);

    char *ptr2 = new char;
    cout<<ptr2<<endl;
    cout<<sizeof(ptr2)<<endl;*/

    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getSum(arr, n);


}