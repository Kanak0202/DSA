#include<iostream>
#include<string>
using namespace std;

string reverseWords(string s) {
    string temp = "";
    int start = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ' || i == n - 1) {
            int end = (s[i] == ' ') ? i - 1 : i;
            temp = s.substr(start, end - start + 1) + " " + temp;
            start = i + 1;
        }
    }

    return temp;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
    return 0;
}
