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
Node* buildTree(vector<int> &InOrder)
{
    idx++;
    if(InOrder [idx] == -1)
    {
        return NULL;
    }

}
int main(){

return 0;
}