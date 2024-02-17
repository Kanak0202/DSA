#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int top;
    int size;
    int *arr;
    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(this->top==this->size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=element;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top==-1){
            return 1;
        }else{
            return 0;
        }
    }

};

int main(){
    Stack st(5);
    st.push(52);
    if(st.empty()==true){
        cout<<"Stack is empty"<<endl;
    }else if(st.empty()==false){
        cout<<"Stack is not empty"<<endl;
    }
    st.pop();
    cout<<"Top element: "<<st.peek()<<endl;


    /*
    //using STL
    stack<int> s1;
    s1.push(2);
    cout<<s1.top()<<endl;
    cout<<s1.empty()<<endl;
    */
   return 0;
}