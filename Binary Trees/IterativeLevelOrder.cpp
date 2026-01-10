#include<iostream>
#include<vector>
#include<queue>
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

void LevelOrderTraversal(Node* root){
queue<Node*> q;
q.push(root);
while(q.size() > 0){
    Node* Curr = q.front();
    q.pop();

    cout << Curr-> data <<" ";
    if(Curr-> left != NULL){
        q.push(Curr-> left);
    }
    if(Curr-> right != NULL){
        q.push(Curr-> right);
    }   
}
}

int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);
LevelOrderTraversal(root);
return 0;
}