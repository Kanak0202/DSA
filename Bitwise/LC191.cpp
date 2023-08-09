#include<iostream>
using namespace std;

int main(){
    //My method
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int count=0;
    // while(n!=0){
    //     int r=n%10;
    //     if(r==0){
    //         n=n/10;
    //         continue;
    //     }
    //     else{
    //         count=count+1;
    //     }
    //     n=n/10;
    // }
    // cout<<count;

    //Checking last bit and right shift
    int n; //will be an inyteger
    cout<<"Enter number: ";
    cin>>n;
    int count = 0;
    while(n!=0){
        if(n&1){  //to check last bit
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}

//For input as a binary number

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     // Convert decimal to binary
//     string binary = "";
//     while(n > 0){
//         binary = to_string(n % 2) + binary;
//         n = n / 2;
//     }

//     int count = 0;
//     for(char c : binary){
//         if(c == '1'){
//             count++;
//         }
//     }
    
//     cout << "Number of set bits: " << count << endl;
// }