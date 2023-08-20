#include<iostream>
using namespace std;

void reverse(char name[], int count){
    int s=0, e=count-1;
    while(s<=e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout<<"Reversed string: "<<name;
}

int main(){
    char name[20];
    cin>>name;
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    reverse(name, count);
    
}