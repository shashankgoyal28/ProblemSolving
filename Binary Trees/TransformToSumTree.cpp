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
void preorderTraversal(Node* root){
if(root == NULL){
    return;
}
cout << root-> data <<" ";
preorderTraversal(root-> left);
preorderTraversal(root-> right);
}

int SumofTree(Node* root){
if(root == NULL){
    return 0;
}
int leftSum = SumofTree(root-> left);
int rightSum = SumofTree(root-> right);
root-> data += leftSum + rightSum;
return root->data;
}

int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);

cout<<"before conversion to sum tree: ";
preorderTraversal(root);
cout << endl;

cout << "Converting to sum tree..." << endl;
SumofTree(root);
cout<<"after conversion to sum tree: ";
preorderTraversal(root);
return 0;
}