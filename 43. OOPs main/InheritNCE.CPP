#include<iostream>
using namespace std;

class Human{
    public:
    int weight;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight = w;
    }
};

//child class
class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

int main(){

    Male m1;
    cout<<m1.age<<endl;
    return 0;
}