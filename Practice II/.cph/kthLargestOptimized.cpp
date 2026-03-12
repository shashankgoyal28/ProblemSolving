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
if(root == NULL)
{
    return -1;
}
int rightAns = kthLargest(root-> right, k);
if(rightAns != -1)
{
    return rightAns;
}
k--;
if(k == 0)
{
    return root-> data;
}
return kthLargest(root-> left, k);
}
int main(){
    int preOrder[] = {5,3,2,-1,-1,4,-1,-1,7,6,-1,-1,8,-1,-1};
    Node* root = buildTree(preOrder);
    int k = 3;
    cout << "The " << k << "rd largest element in the BST is: " << kthLargest(root, k) << endl;

return 0;
}