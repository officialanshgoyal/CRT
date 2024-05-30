#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void bfs(TreeNode* root) {
    if (!root) return;
    deque<TreeNode*> q;
    q.push_back(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop_front();
        cout << node->val << " ";
        if (node->left) q.push_back(node->left);
        if (node->right) q.push_back(node->right);
    }
}
int main(){
    TreeNode* root = new TreeNode(1);
     root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "BFS traversal of the tree is: ";
    bfs(root);
    cout << endl;
    return 0;      
}