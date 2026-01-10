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

void preOrderTraversal(Node* root){
if(root == NULL){
    return;
}
cout << root-> data <<" ";
preOrderTraversal(root-> left);
preOrderTraversal(root-> right);
}
int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);
preOrderTraversal(root);
cout<< endl;
cout << "Root node is: " << root->data << endl;
return 0;
}