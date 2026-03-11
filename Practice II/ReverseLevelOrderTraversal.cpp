#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
static int idx=-1;
Node* buildTree(int preOrder[]){
    idx++;
    if(preOrder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preOrder[idx]);
    root->left=buildTree(preOrder);
    root->right=buildTree(preOrder);
    return root;
}
void reverseLevelOrder(Node* root){
    if(root== NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    while(q.size() > 0)
    {
        Node* curr = q.front();
        q.pop();
        ans.push_back(curr-> data);
        if(curr-> right != NULL)
        {
            q.push(curr-> right);
        }
        if(curr-> left != NULL)
        {
            q.push(curr-> left);
        }
    }
    reverse(ans.begin(), ans.end());
    // because the type is void so we are printing the ans vector here
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildTree(preOrder);
    reverseLevelOrder(root);
return 0;
}