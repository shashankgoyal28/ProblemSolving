#include<iostream>
#include<list> 
using namespace std;
class Graph{
    int V;
    list<int> *l; //adjacency list
    public:
    Graph(int V){
        // this is used to consider the current vertex
        this -> V = V;
        l = new list<int>[V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
return 0;
}