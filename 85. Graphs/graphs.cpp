#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class Graph{
    public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction){
        //direction == 0 -> undirected graph
        //direction == 1 -> directed graph

        //create an edge from u to v
        adj[u].push_back(v);
        if(!direction){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto it: adj){
            cout<<it.first<<"->";
            for(auto i: it.second){
                cout<<i<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    int m;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter the number of edges: "<<endl;
    cin>>n;

    Graph<int> g;

    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;
        //undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();
}