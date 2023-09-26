#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	cin>>c;
	if('A'<=c && c<='Z'){
		cout<<1;
	}else if('a'<=c && c<='z'){
		cout<<0;
	}else{
		cout<<-1;
	}
	
}
