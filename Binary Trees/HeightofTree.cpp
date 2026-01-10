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

int heightofTree(Node* root){
if(root == NULL){
    return 0;
}
int leftHeight = heightofTree(root-> left);
int rightHeight = heightofTree(root-> right);
return max(leftHeight, rightHeight) + 1; //+1 is used to add the root node.
}

int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);

cout<< endl;
cout << "Height of the tree is: " << heightofTree(root) << endl;
return 0;
}