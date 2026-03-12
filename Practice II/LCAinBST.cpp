#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
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
Node* LCAinBST(Node* root, int p, int q)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root-> data > p && root-> data > q)
    {
        return LCAinBST(root-> left, p, q);
    }
    else if(root-> data < p && root-> data < q)
    {
        return LCAinBST(root-> right, p, q);
    }
    else
    {
        return root;
    }
}
int main(){
    int preOrder[] = {6,2,0,-1,-1,4,3,-1,-1,5,-1,-1,8,7,-1,-1,9,-1,-1};
    Node* root = buildTree(preOrder);
    int p = 2;
    int q = 8;
    Node* lca = LCAinBST(root, p, q);
    if(lca != NULL)
    {
        cout << "The LCA of " << p << " and " << q << " is: " << lca-> data << endl;
    }

return 0;
}