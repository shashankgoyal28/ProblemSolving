#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
// Keep going to the First Unvisited Neighbour.
// doing it using the Recursion Approach.
class graph{
int V;
list<int> *l;
    public:
    graph(int V)
    {
        this->V = V;
        l = new list<int> [V]; 
    }
    void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
    }
    
    void DFShelper(int u, vector<bool> &vis){
        cout<< u << " ";
        vis[u] = true;
        for(int v : l[u])
        {
            if(!vis[v])
            {
                DFShelper(v, vis);
            }
        }
    }
   void dfs(){
    int src = 0;
    vector<bool> visited(V, false);
    DFShelper(src, visited);
   }
};
int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.dfs();
return 0;
}