#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;
    cout<<"Address of num :"<<&num<<endl;
    int *ptr = &num;
    cout<<"*ptr value: "<<*ptr<<endl;
    cout<<"ptr address: "<<ptr<<endl;
    cout<<"Size of num: "<<sizeof(num)<<endl;
    cout<<"Size of *ptr: "<<sizeof(*ptr)<<endl;
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl; //system dependent --> in some systems it gives 8 
}