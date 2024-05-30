#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

struct Node
{
    int data;
    Node *left;
    Node *right;
    vector<Node *> child;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node *dummy_tree()
{
    Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->left->right->left = newNode(7);
    root->right->left->right = newNode(8);
    return root;
}

void print_nodes_queue(queue<Node *> nodes_queue)
{
    while (!nodes_queue.empty())
    {
        cout << nodes_queue.front()->data << " ";
        nodes_queue.pop();
    }
    cout << "\n";
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void bfs_traversal(Node *current_node) // level order
{
        queue<Node *> nodes_queue;
        nodes_queue.push(current_node);
        while (!nodes_queue.empty())
        {
            cout << nodes_queue.front()->data << " ";
            if (nodes_queue.front()->left)
            {
                nodes_queue.push(nodes_queue.front()->left);
            }
            if (nodes_queue.front()->right)
            {
                nodes_queue.push(nodes_queue.front()->right);
            }
            nodes_queue.pop();
    }
}

void print_level_wise_Order(Node *current_node)
{
    if (!current_node)
    {
        return;
    }
    queue<Node *> nodes_queue;
    nodes_queue.push(current_node);
    while (!nodes_queue.empty())
    {
        int size = nodes_queue.size();
        forn(i, size)
        {
            cout << nodes_queue.front()->data << " ";
            if (nodes_queue.front()->left)
            {
                nodes_queue.push(nodes_queue.front()->left);
            }
            if (nodes_queue.front()->right)
            {
                nodes_queue.push(nodes_queue.front()->right);
            }
            nodes_queue.pop();
        }
        cout << "\n";
    }
}

void print_level_wise_alternating_Order(Node *current_node)
{
    if (!current_node)
    {
        return;
    }
    queue<Node *> nodes_queue;
    nodes_queue.push(current_node);
    bool print_straight = 1;
    while (!nodes_queue.empty())
    {
        int size = nodes_queue.size();
        vi v;
        forn(i, size)
        {
            v.pb(nodes_queue.front()->data);
            if (nodes_queue.front()->left)
            {
                nodes_queue.push(nodes_queue.front()->left);
            }
            if (nodes_queue.front()->right)
            {
                nodes_queue.push(nodes_queue.front()->right);
            }
            nodes_queue.pop();
        }

        if (!print_straight)
        {
            reverse(v.begin(), v.end());
        }
        print_vec(v);
        print_straight = !print_straight;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Node *root = dummy_tree();
    print_level_wise_alternating_Order(root);
    // cout << "\n";
}