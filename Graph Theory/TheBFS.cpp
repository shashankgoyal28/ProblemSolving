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
        vector<bool> visited(V, false);
        // push the Source Node 
        q.push(0);
        visited[0] = true;

        while(q.size() > 0)
        {
            int u = q.front(); // u is the Source//..
            q.pop(); //v is the immediate neighbour or Destination//
            
            cout << u << endl;

            for(int v: l[u])
            {
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v); 
                }
            }
        }
        cout << endl;
    }
};
int main(){

    graph g(5);
    g.addEdge(0,1);
        g.addEdge(1,2);
            g.addEdge(1,3);
                g.addEdge(2,3);
                    g.addEdge(2,4);
    g.BFs();
return 0;
}