#include<iostream>
#include<cstring>
using namespace std;

//this class can be declared in another file too and then imported in this file
class Hero {
    //constructor
    //properties
    private:
    int health;
    public:
    char level;
    char* name;
    static int timeToComplete;


    Hero(){
        // cout<<"Inside constructor"<<endl;
        name = new char[100];
    }

    //Copy Constructor
    // Hero (Hero& temp){
    //     this->name = temp.name;
    //     this->level = temp.level;
    //     this->health = temp.health;
    // }

    // parameterized constructor
    Hero(int health, char level){
        cout<<"Parametrized Constructor"<<endl;
        // cout<<"This: "<<this<<endl;
        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero (Hero& temp){
        cout<<"Copy Constructor"<<endl;
        char* ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = health;
        this->level = level;
    }

    static void printStatic(){
        cout<<"time to complete: "<<timeToComplete;
    }



    void print(){
        // cout<<"Inside class"<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Health is: "<<health<<endl;
        cout<<"Level is: "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(int l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    //destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    //callling static function
    Hero::printStatic();

    //static function

    //For destructor
    // Hero a; //object created statically

    // Hero* b = new Hero; //dynamically created object

    // delete(b);

    //calling static data member without creating an object
    // cout<<Hero::timeToComplete<<endl;

    //Accessing after object creation
    // Hero* Ragahv = new Hero;

    // // cout<<(*Ragahv).timeToComplete<<endl;
    // // cout<<Ragahv->timeToComplete<<endl;

    // //updating static value
    // Ragahv->timeToComplete = 10;
    // cout<<Ragahv->timeToComplete<<endl; //prints 10 

    // cout<<Hero::timeToComplete<<endl; // also prints 10
}


    // char name[6] = "kanak";

    // Hero K;
    // K.setHealth(50);
    // K.setLevel('R');
    // K.setName(name);
    // K.print();

    // Hero K2(K); //copying K in K2, copy constructor will be called
    // cout<<"K2"<<endl;
    // K2.print();
    // cout<<endl;
    // cout<<"K"<<endl;
    // K.name[1] = 'H';
    // K.print();
    // cout<<endl;
    // cout<<"K2   "<<endl;
    // K2.print();

    // Hero S(90, 'C');
    // // S.print();
    // //Copy Constructor
    // Hero R(S);
    // cout<<"R level: "<<R.level<<endl;
    // cout<<"R health: "<<R.getHealth()<<endl;

    // R.print();

    //static allocation
    // Hero Kanak(70);
    // cout<<"Address of Kanak :"<<&Kanak<<endl;
    // cout<<Kanak.getHealth()<<endl;

    // Hero *Mukund = new Hero(90);
    // cout<<"Address of Mukund :"<<&Mukund<<endl;
    // cout<<Mukund->getHealth();

    //dynamic allocation
    // Hero *h1 = new Hero;

    // (*h1).setHealth(90);
    // cout<<"h1 health: "<<(*h1).getHealth()<<endl;
    // cout<<"h1 health ->: "<<h1->getHealth()<<endl;
    // // cout<<sizeof(Kanak)<<endl;
    // // Kanak.health = 100;
    // Kanak.setHealth(50);
    // Kanak.level = 'A';
    // cout<<"Kanak's health: "<<Kanak.getHealth()<<endl;
    // cout<<"Kanak's level: "<<Kanak.level<<endl;

//     return 0;
// }