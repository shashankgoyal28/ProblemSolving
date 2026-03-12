#include<iostream>
#include<list>
#include<queue>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this -> V = V;
        l = new list<int>[V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // BFS Traversal 
    void BFS()
    {
        queue<int> q;
        vector<bool> visited(V, false);

        q.push(0); // Assuming we start BFS from vertex 0
        visited[0] = true;

        //u -> source vertex
        //v -> neighbour vertex
        while(q.size() > 0)
        {
            int u = q.front();
            q.pop();

            cout<<u<<" "; // Process the vertex (e.g., print it)
            for(int v: l[u])
            {
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.BFS(); // Call the BFS function to perform the traversal
return 0;
}


