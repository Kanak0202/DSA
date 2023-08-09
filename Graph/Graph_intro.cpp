#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T> //For making graph of any dataType

class graph {
public:
    unordered_map<T, list<T>> adj; // Add semicolon here

    void addEdge(T u, T v, bool direction){
        //undirected-->direction==0
        //directed-->direction==1

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){ //Key
            cout<<i.first<<"->";
            for(auto j:i.second){ //List
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter the number of edges: ";
    cin>>m;
    graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0); //undirected graph created;
    }

    //Printing graph
    g.printAdjList();
    return 0;
}