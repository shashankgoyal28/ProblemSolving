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
int ans = 0;
int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root-> left);
    int rightHeight = height(root-> right);
    ans = max(ans, leftHeight + rightHeight);
    // leftHeight + rightHeight is the diameter at the current node, and we update the global variable ans to keep track of the maximum diameter found so far. Finally, we return the height of the current node, which is the maximum of the left and right heights plus one (to account for the current node itself).
    return max(leftHeight, rightHeight) + 1;
}
int diameter(Node* root)
{
    height(root);
    return ans;
}
int main(){
    int preOrder[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
    Node* root = buildTree(preOrder);
    cout << diameter(root) << endl;
    return 0;
}