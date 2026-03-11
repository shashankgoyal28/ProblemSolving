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
// buildtree is a recursive function that takes the preOrder array as input and builds the binary tree. It uses a static variable idx to keep track of the current index in the preOrder array. If the current value is -1, it returns NULL, indicating that there is no node at that position. Otherwise, it creates a new node with the current value and recursively builds the left and right subtrees.
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

int main(){
    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildtree(preOrder);
cout << "Root node is: " << root->root << endl;
cout << "Left child of root is: " << root->left->root << endl;
cout << "Right child of root is: " << root->right->root << endl;
return 0;
}