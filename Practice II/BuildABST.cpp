#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data; // data is the value stored in the node, and left and right are pointers to the left and right child nodes, respectively. The constructor initializes the data and sets the left and right pointers to NULL.
    Node* left; // root -> data = means the value of the node for eg in arr {3,2,1,5,6,4} the root node will be 3 value. 
    Node* right; // when we say val < root->data, it means we are comparing the value we want to insert with the value of the current node (root). If the value is less than the current node's data, we go to the left subtree; if it's greater, we go to the right subtree. This is how we maintain the properties of a binary search tree.
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if( val < root-> data)
    {
        root-> left = insert(root->left, val);
    }
    else if(val > root-> data)
    {
        root -> right = insert(root-> right, val);
    }
    return root;
}

Node* BuildBST(vector<int> arr)
{
    Node* root = NULL;

    for(int val: arr)
    {
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root)
{
     if (root == NULL){
        return;
     }
     inorder(root-> left);
     cout << root-> data << " ";
     inorder(root-> right);
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};

    Node* root = BuildBST(arr);
    cout << "Inorder traversal of the BST is: ";
    inorder(root);
    cout << endl;
return 0;
}