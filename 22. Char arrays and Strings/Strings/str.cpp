#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline (cin, s);
    cout<<"Your string is "<<s<<endl;
    // cout<<"Size "<<s.size()<<endl;
    // cout<<"Max Size "<<s.max_size()<<endl;
    // // s.resize(9);
    // // cout<<"Size "<<s.size()<<endl;
    // // s.clear();
    // cout<<"Your string is "<<s<<endl;
    // cout<<"Size "<<s.size()<<endl;
    // cout<<s.at(2)<<endl;
    // // cout<<s.back()<<endl;
    // cout<<s.front()<<endl;
    // // s.append();
    // s+=" Khandelwal";
    // cout<<"Your string is "<<s<<endl;
    // s.push_back('j');
    // cout<<"Your string is "<<s<<endl;
    // string str;
    // str.assign("Luxembourg");
    // // str.insert(2,"Hell");
    // s.erase(1, 2);
    // // str.replace(1, 2, "jolly");
    // // str.swap(s);
    // str.pop_back();
    // int num = stoi(s);
    // num = num+6;
    // cout<<num;
    cout<<s.substr(2, 2);
    // cout<<"Your string is "<<s<<endl;
    // cout<<"Your string is "<<str<<endl;
    // cout<<s.data();
    // cout<<s.find("kha", 3, 3);
    // cout<<s[2];
}

// extract to string
// #include <iostream>
// #include <string>

// int main ()
// {
//   std::string name;

//   std::cout << "Please, enter your full name: ";
//   std::getline (std::cin,name);
//   std::cout << "Hello, " << name << "!\n";

//   return 0;
// }