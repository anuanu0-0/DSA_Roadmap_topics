#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int max_width(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int maxWid = 0;
    while (!q.empty())
    {
        int count = q.size();
        maxWid = max(maxWid, count);
        for (int i = 0; i < count; i++)
        {
            Node *cur = q.front();
            q.pop();
            if (cur->left != NULL)
                q.push(cur->left);
            if (cur->right != NULL)
                q.push(cur->right);
        }
    }
    return maxWid;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(30);
    root->right->right = new Node(15);

    cout << max_width(root) << endl;
}