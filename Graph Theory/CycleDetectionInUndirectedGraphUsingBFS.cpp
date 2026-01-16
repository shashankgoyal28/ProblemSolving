#include<iostream>
#include<vector>
#include<list>
#include<queue>
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

    bool isCycleUndirectedBFS(int src, vector<bool> &visited){
        queue<pair<int, int>> q;
        q.push({src, -1});
        visited[src] = true;

        while(q.size() > 0)
        {
            int u = q.front().first;
            int parentU = q.front().second;
            q.pop();

            list<int> neighbors = l[u];
            for(int v: neighbors){
                if(!visited[v])
                {
                    q.push({v,u});
                    // u ----> v; some edge Existes.
                    visited[v] = true;
                }
                else if(v != parentU){ //Cycle Conditions
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(){
vector<bool> Visited(V, false);
for(int i = 0 ; i< V; i++)
{
    if(!Visited[i]){
        if(isCycleUndirectedBFS(i, Visited))
        {
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
cout<< g.isCycle() << endl;
    return 0;
}