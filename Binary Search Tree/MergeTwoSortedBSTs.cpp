#include<iostream>
#include<vector> 
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

Node* insert(Node* root, int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }

    if(val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else if(val > root->data)
    {
        root->right = insert(root->right, val);
    }

    return root;
}
Node* buildBST(vector<int> arr)
{
    Node* root = NULL;

    for(int val: arr)
    {
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root, vector<int>& arr)
{
if(root == NULL)
{
    return;
}
inorder(root -> left,arr);
arr.push_back(root-> data);
inorder(root -> right, arr);
}

Node* buildBSTfromSorted(vector<int> arr, int start, int end)
{
if(start > end)
{
    return NULL;
}
int mid = start+(end-start)/2;
Node* root = new Node(arr[mid]);
root -> left = buildBSTfromSorted(arr, start, mid-1);
root -> right = buildBSTfromSorted(arr, mid+1, end);

return root;
}

Node* merge2BSTS(Node* root1, Node* root2)
{
vector<int> arr1,arr2;
inorder(root1,arr1);
inorder(root1,arr2);

vector<int> temp;
int i=0 ;
int j = 0;
while(i < arr1.size() && j < arr2.size())
{
    if(arr1[i] < arr2[j])
    {
        temp.push_back(arr1[i++]);
    }
    else{
        temp.push_back(arr2[j++]);
    }
}
while(i < arr1.size()){
    temp.push_back(arr1[i++]);
}
while(j < arr2.size()){
    temp.push_back(arr2[j++]);
}
return buildBSTfromSorted(temp, 0, temp.size()-1);
}
int main(){
vector<int> arr1 = {8,2,1,10};
vector<int> arr2 = {5,3,0};
Node* root1 = buildBST(arr1);
Node* root2 = buildBST(arr2);

Node* root = merge2BSTS(root1,root2);
vector<int> seq;
for(int v: seq){
    cout<< v<< " ";
}
cout <<endl;
return 0;
}