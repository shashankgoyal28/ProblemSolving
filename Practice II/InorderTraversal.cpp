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
Node* buildtree(vector <int> &PreOrder)
{
    idx++;
    if(PreOrder[idx] == -1)
    {
        return NULL;
    }
    Node* root = new Node(PreOrder[idx]); // this is the point where recursion starts.
    root-> left = buildtree(PreOrder);
    root-> right = buildtree(PreOrder);
    return root;
}
void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root-> left);
    cout << root-> root <<" ";
    inOrder(root-> right);
    }
int main(){

vector <int> preOrder = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
Node* root = buildtree(preOrder); 
// this is the way through which one could enter into recursion and build the tree.
cout << "Root node is: " << root->root << endl;
cout << "Left child of root is: " << root->left->root << endl;
cout << "Right child of root is: " << root->right->root << endl;
inOrder(root);

return 0;
}