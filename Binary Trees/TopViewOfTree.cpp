#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

void topView(Node* root){
    queue<pair<Node*, int>> q;
    map<int, int> topNode; // horizontal distance, node Value.
    q.push({root, 0}); // root horizontal distance is 0.
    while(q.size() > 0){
        Node* curr = q.front().first;
        int currenthd = q.front().second; // horizontal distance
        // if horizontal distance is not present in the map then only we will insert it.
        if(topNode.find(currenthd) == topNode.end()){
            topNode[currenthd] = curr-> data;
        }
        q.pop();

        if(curr-> left != NULL){
            q.push({curr-> left, currenthd - 1});
        }
        if(curr-> right != NULL){
            q.push({curr-> right, currenthd + 1});
        }
    }
    for(auto i : topNode){
    cout << i.second << " ";
    }
    cout << endl;
}
int main(){
vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preOrder);
topView(root);
return 0;
}