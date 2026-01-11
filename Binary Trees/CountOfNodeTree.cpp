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
Node* buildTree(vector<int> &preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root-> left = buildTree(preorder);
    root-> right = buildTree(preorder);
    return root;
}

int countOfNodes(Node* root){
if(root == NULL){
    return 0;
}
int leftCount = countOfNodes(root-> left);
int rightCount = countOfNodes(root-> right);
return leftCount + rightCount + 1; // +1 is for the root node.
}

int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);
cout << "Count of nodes in the tree is: " << countOfNodes(root) << endl;
return 0;
}