#include<iostream>
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
Node* buildTree(int preOrder[])
{
    idx++;
    if(preOrder[idx] == -1)
    {
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root-> left = buildTree(preOrder);
    root-> right = buildTree(preOrder);
    return root;
}
Node* LCA(Node* root, int p, int q)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root-> root == p || root-> root == q)
    {
        return root;
    }
    Node* left = LCA(root-> left, p, q);
    Node* right = LCA(root-> right, p, q);
    if(left && right)
    {
        return root;
    }
    else if(left != NULL)
    {
        return left;
    }
    else
    {
        return right;
    }
}
int main(){
    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildTree(preOrder);
    int p = 4;
    int q = 5;
    Node* lca = LCA(root, p, q);
    if(lca != NULL)
    {
        cout << "LCA of " << p << " and " << q << " is: " << lca-> root << endl;
    }
    else
    {
        cout << "LCA does not exist." << endl;
    }

return 0;
}