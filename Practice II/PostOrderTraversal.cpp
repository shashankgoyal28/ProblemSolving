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
static int idx = 0;
Node* buildTree(vector<int> &preOrder)
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
void postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->root<<" ";
}
int main(){
    vector<int> preOrder = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildTree(preOrder);

    postOrder(root);
    cout<<endl;

return 0;
}