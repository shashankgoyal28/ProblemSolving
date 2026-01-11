#include <iostream>
#include <vector>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Morris Inorder Traversal
vector<int> inorderTraversal(TreeNode* root)
{
    vector<int> ans;
    TreeNode* curr = root;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else
        {
            // find inorder predecessor
            TreeNode* IP = curr->left;
            while (IP->right != NULL && IP->right != curr)
            {
                IP = IP->right;
            }

            if (IP->right == NULL)
            {
                IP->right = curr;   // create thread
                curr = curr->left;
            }
            else
            {
                IP->right = NULL;   // remove thread
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main()
{
    /*
        Tree structure:
              1
               \
                2
               /
              3
        Inorder: 1 3 2
    */

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}