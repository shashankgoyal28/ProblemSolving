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
int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root-> left);
    int rightHeight = height(root -> right);
    return max(leftHeight, rightHeight) + 1;
}
int main(){
    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildTree(preOrder);
    cout<<"Height of the tree is: "<<height(root)<<endl;

return 0;
}