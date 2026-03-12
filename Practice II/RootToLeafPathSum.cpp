#include<iostream>
#include<vector>
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
bool hasPathSum(Node* root, int targetSum)
{
    if(root == NULL)
    {
        return false;
    }
    // leaf 
    if(root-> left == NULL && root-> right == NULL)
    {
        if(root-> data == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // non-leaf
    return hasPathSum(root-> left, targetSum - root-> data) || hasPathSum(root-> right, targetSum - root-> data);
}
int main(){
    int preOrder[] = {5,4,11,7,-1,-1,2,-1,-1,-1,8,13,-1,-1,4,-1,1,-1,-1};
    Node* root = buildTree(preOrder);
    int targetSum = 22;
    if(hasPathSum(root, targetSum))
    {
        cout << "There is a root-to-leaf path with the target sum." << endl;
    }
    else
    {
        cout << "There is no root-to-leaf path with the target sum." << endl;
    }

return 0;
}