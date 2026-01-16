#include<iostream>
#include<vector>
#include<list>
using namespace std;

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
    void printAdj(){
        for(int i = 0; i< V; i++){
            cout<< i << " : ";
            for(int neighbour : l[i])
            {
                cout<<neighbour<< " " <<endl;
            }
        }
    }

bool isCycleUndirectedDFS(int src, int parent, vector<bool>& visited){ //using the DFS algorithm this is the recursive function we are going to use.
visited[src] = true;
list<int> neighbors = l[src];
for(int v: neighbors){
    if(!visited[v]){
        if(isCycleUndirectedDFS(v,src,visited))
        {
            return true;
        }
    }
    else if(v != parent){
        return true;
    }
}
return false;
}
bool isCycle(){
vector<bool> visited(V, false);
for(int i = 0; i < V; i++){
    if(!visited[i])
    {
       if (isCycleUndirectedDFS(i, -1, visited)){
        return true;
       }
    }
}
return false;
}
};

int main(){

    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
cout<< g.isCycle()<<endl;
    return 0;
}