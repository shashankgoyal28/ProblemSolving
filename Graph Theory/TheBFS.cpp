#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class graph{
int V;
// Dynamic Array
list<int> *l; //int *arr
    public:
    graph(int V)
    {
        // intializing the value's of the vertices and the edges 
this->V = V; //Vertices
l = new list<int> [V]; // edge
//  arr = new int[v]
    }
    void addEdge(int u, int v){
        // Storing an Undirected Edge
    l[u].push_back(v);
    l[v].push_back(u);
    }
    // BFS Traversal
    void BFs(){
        queue<int> q;
        
    }
   

};
int main(){

    graph g(5);
    g.addEdge(0,1);
        g.addEdge(1,2);
            g.addEdge(1,3);
                g.addEdge(2,3);
                    g.addEdge(2,4);
return 0;
}