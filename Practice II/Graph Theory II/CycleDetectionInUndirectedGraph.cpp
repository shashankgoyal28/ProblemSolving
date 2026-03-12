#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int> *l ;
    public:
    Graph(int V)
    {
        this -> V = V;
        l = new list<int> [V];
    }
void addEdge(int u, int v)
{
    l[u].push_back(v);
    l[v].push_back(u);
}
bool CycleDetetionInUndirectedGraph(int u, vector<bool> &visited, vector <int> &parent)
{
    visited[u] = true;
    for (int v: l[u])
    {
        if(!visited[v])
        {
            if(CycleDetetionInUndirectedGraph(v, visited, parent))
            {
                return true;
            }
        }
        else if(v != parent[u])
        {
            return true;
        }
    }
    return false;
}
bool dfs()
{
    int src = 0;
    vector<bool> visited(V, false);
    vector<int> parent(V, -1); //initalize parent with -1 because initially there is no parent for any vertex
    for(int i = 0; i< V;i++)
    {
        if(!visited[i])
        {
            if(CycleDetetionInUndirectedGraph(i, visited, parent))
            {
                cout<<"Cycle Detected in the graph"<<endl;
                return true;
            }
        }
    }
    return false;
}
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    g.dfs(); // Call the DFS function to perform the traversal

return 0;
}