#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

Node *make_bst(vi v, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    if (l == r)
    {
        return newNode(v[l]);
    }

    int mid = (l + r) / 2;

    Node *root = newNode(v[mid]); // 1,5->3,2,4->3, 2,5->3
    root->left = make_bst(v, l, mid - 1);
    root->right = make_bst(v, mid + 1, r);
    return root;
}

void print_inOrder(Node *currentNode)
{
    if (!currentNode)
    {
        return;
    }
    print_inOrder(currentNode->left);
    cout << currentNode->data << " ";
    print_inOrder(currentNode->right);
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vi v = input_vector();
    Node *root = make_bst(v, 0, v.size() - 1);
    // print_inOrder(root);
    print_level_wise_Order(root);
}