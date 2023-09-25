#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    //cout<<"Source: "<<src<<" Destination: "<<dest<<endl;
    //BASE CASE
    if(src==dest){
        cout<<"Reached Home"<<endl;
        return;
    }

    //PROCESSING
    src++;
    reachHome(src, dest);
}


int main(){
    int dest = 10;
    int src = 1;
    cout<<endl;
    reachHome(src, dest);

}