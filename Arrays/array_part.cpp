#include<iostream>
using namespace std;

int* array_part(int arr[], int lo, int hi){
    int *arrPart = new int[hi - lo];
    int j = 0;
    for(int i = lo; i < hi; i++){
        arrPart[j] = arr[i];
        j++;
    }
    return arrPart;
}

int main(){
    int N, *arrP;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int lo, hi;
    cout << "Enter lo value: ";
    cin >> lo;
    cout << "Enter hi value: ";
    cin >> hi;
    arrP = array_part(arr, lo, hi);
    for(int i = 0; i < hi - lo; i++){
        cout << arrP[i] << " ";
    }
    delete[] arrP; // Deallocate the dynamically allocated memory
    return 0;
}