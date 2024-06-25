#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class heap{
    public: 
    int arr[100];
    int size;

    heap(){ 
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
        return;
        }
        arr[1] = arr[size];
        size--;
        //take root node to its corect position
        int i=1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int t = n;
    while(t>1){
        swap(arr[1], arr[t]);
        t--;
        heapify(arr, t, 1);
    }
}

int main(){
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.deleteFromHeap();
    // h.print();
    // int arr[8] = {-1, 55, 60, 70, 50, 51, 65, 66};
    // int n=7;
    // for(int i=n/2; i>0; i--){
    //     heapify(arr, n, i);
    // }
    // for(int i=1; i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // heapSort(arr, n);
    // cout<<"Sorted Heap: "<<endl;
    // for(int i=1; i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<"Using priority queue: "<<endl;
    // priority_queue<int> pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(5);
    // pq.push(4);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // cout<<"Size pq: "<<pq.size()<<endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(4);
    cout<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<minHeap.top()<<endl;
    cout<<"Size minHeap: "<<minHeap.size()<<endl;
    return 0;
}