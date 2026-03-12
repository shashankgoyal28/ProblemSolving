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
        left =NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root-> data)
    {
        root-> left = insert(root-> left, val);
    }
    else if(val > root-> data)
    {
        root -> right = insert(root-> right, val);
    }
    return root;
}
Node* buildBST(vector<int> arr)
{
    Node* root = NULL;

    for(int val: arr)
    {
        root = insert(root, val);
    }
    return root;
}
void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root-> left);
    cout << root-> data << " ";
    inOrder(root-> right);
}

bool isBST(Node* root, Node* minNode, Node* maxNode)
{
    if(root == NULL)
    {
        return true;
    }
    if(minNode != NULL && root-> data <= minNode-> data)
    {
        return false;
    }
    if(maxNode != NULL && root-> data >= maxNode-> data)
    {
        return false;
    }
    return isBST(root-> left, minNode, root) && isBST(root-> right, root, maxNode);
}
int main(){
    vector<int> arr = {5, 3, 7, 2, 4, 6, 8};
    Node* root = buildBST(arr);
    inOrder(root);
    cout << endl;
    if(isBST(root, NULL, NULL))
    {
        cout << "The tree is a valid BST." << endl;
    }
    else
    {
        cout << "The tree is not a valid BST." << endl;
    }
    return 0;
}