#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int root;
    Node* left;
    Node* right;
    Node(int val)
    {
        root = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
Node* buildtree(int preOrder[])
{
    idx++;
    if(preOrder[idx] == -1)
    {
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root-> left = buildtree(preOrder);
    root-> right = buildtree(preOrder);
    return root;
}
void RightView(Node* root){
    if(root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++)
        {
        Node* curr = q.front();
        q.pop();
        if(i == n-1)
        {
        cout<<curr->root<<" ";
        }

        if(curr-> left != NULL)
        {
            q.push(curr-> left);
        }
        if(curr-> right != NULL)
        {
            q.push(curr-> right);
        }
    }
}
}


int main()
{
    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildtree(preOrder);
    RightView(root);
    cout<<endl;
return 0;
}