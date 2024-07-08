#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch; 
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    void insertUtil(TrieNode* root, string word){
         if(word.length()==0){
            root->isTerminal=true;
            return;
         }
         //assumption->word will be in caps
         int index = word[0]-'A';
        TrieNode* child;
        if(root->children[index]!=NULL){
            child = root->children[index];

        }else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //Recursion
        insertUtil(child, word.substr(1));
    }

    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            return false;
        }

        //Recursion
        return searchUtil(child, word.substr(1));
    }

    void removeUtil(TrieNode* root, string word){
        if(word.length()==0){
            return;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index]!=NULL){
            child = root->children[index];
            child->isTerminal = false;
        }
        removeUtil(child, word.substr(1));
    }

    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    }
    void insertWord(string word){
        insertUtil(root, word);
    }

    bool search(string word){
        return searchUtil(root, word);
    }

    void removeWord(string word){
        removeUtil(root, word);
    }
};

int main(){
    Trie* t = new Trie();
    t->insertWord("TIMER");
    t->insertWord("KANAK");
    t->insertWord("CHOTA");
    t->insertWord("DON");
    
    cout<<"Searching: "<<endl;
    cout<<t->search("TIMER")<<endl;
    t->removeWord("TIMER");
    cout<<t->search("TIMER")<<endl;
    
    return 0;
}