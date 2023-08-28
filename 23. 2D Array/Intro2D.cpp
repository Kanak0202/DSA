#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int element, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col] == element){
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum +=arr[i][j];
        }
        cout<<"Sum of row "<<row<<" is: "<<sum<<endl;
    }
}
void colWiseSum(int arr[][4], int row, int col){
    for(int i=0;i<col;i++ ){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of column "<<i<<" is: "<<sum<<endl;
    }
}

int largestRowSum(int arr[][4], int row, int col){
    int max=INT16_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum +=arr[i][j];
        }
        if(sum>max){
                max=sum;
        }
    }
    return max;
}

int main(){
    int arr[3][4];
    //row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    //column wise input
    cout<<"Enter the element to search: ";
    int element;
    cin>>element;
    if(isPresent(arr, element, 3,4)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }

    colWiseSum(arr, 3,4);
    
    int large = largestRowSum(arr, 3,4);
    cout<<large<<endl;


    

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}