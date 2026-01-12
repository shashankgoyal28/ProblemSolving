#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* rightmostinleftsubtree(Node* root){
Node* ans;
while(root!= NULL)
{
ans = root;
root = root-> right;
}
return ans;
}
Node* leftmostinrightsubtree(Node* root){
    Node* ans;
while(root!= NULL)
{
ans = root;
root = root-> left;
}
return ans;
}

vector<int> getPredSucc(Node* root, int key){
    // 0 = pred 1- succ
    Node* curr = root;
    Node* pred = NULL;
    Node* succ = NULL;

    while(curr != NULL){
        if(key < curr->data)
        {
            succ = curr;
            curr = curr ->left;
        }
        else if(key > curr->data)
        {
            pred = curr;
            curr = curr->right;
        }
        else {
            if(curr->left != NULL){
                // inorder pred
                pred = rightmostinleftsubtree(curr-> left);

            }
            if(curr->right != NULL){
                // inorder succ
                succ = leftmostinrightsubtree(curr-> right);

            }
            break;
        }
    }
    return {pred->data, succ->data};
}


int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->left = new Node(8);
    root->right->right = new Node(7);

    int key = 7;
    vector<int> ans = getPredSucc(root, key);
    cout<<"Pred :"<< ans[0]<<endl;
    cout<<"Succ :"<< ans[1]<<endl;
    return 0;
}