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
int kthLargest(Node* root, int &k)
{
    static int prevOrder = 0;

    if(root == NULL)
    {
        return -1;
    }

   if(root->right != NULL)
    {
        int rightAns = kthLargest(root->right, k);
        if(rightAns != -1)
        {
            return rightAns;
        }  
    }

    prevOrder++;
    if(prevOrder == k)
    {
        return root->data;
    }
    if(root->left != NULL)
    {
        int leftAns = kthLargest(root->left, k);
        if(leftAns != -1)
        {
            return leftAns;
        }   
    }

    return -1;
}
int main(){

    int preOrder[] = {3,2,1,-1,-1,-1,5,4,-1,-1,6,-1,-1};
    Node* root = buildTree(preOrder);
    int k = 3;
    cout<<"Kth largest element in the BST is: "<<kthLargest(root, k)<<endl;
return 0;
}