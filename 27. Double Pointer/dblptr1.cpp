#include<iostream>
using namespace std;

int update(int **ptr){
    // ptr = ptr+1;//No Change

    *ptr = *ptr+1; //Change in address of ptr

    // **ptr = **ptr+1; //Throws an Error if update(int *ptr);
}

int main(){
    int i = 5;
    int *ptr  =&i;
    int **ptr2 =&ptr;

    /*cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;
    cout<<endl;
    cout<<"ptr2: "<<ptr2<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;
    cout<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"**ptr2: "<<**ptr2<<endl;*/

    cout<<"Before"<<endl;
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<"After"<<endl;
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
}