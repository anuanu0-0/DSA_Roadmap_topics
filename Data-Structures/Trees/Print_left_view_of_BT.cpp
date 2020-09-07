//  Time Complexity : O(n)
//  Auxilary Space for Recursive solution : O(h), where h is height of binary tree

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

// Recurisive Method :

// To keep a count of the leftmost node by counting levels
int lastLevel = 0;

void print_left_rec(Node *root, int level)
{
    if (root == NULL)
        return;
    if (lastLevel < level)
    {
        cout << root->data << " ";
        lastLevel = level;
    }
    print_left_rec(root->left, level + 1);
    print_left_rec(root->right, level + 1);
}

// If we don't have access to calling function we can direct it
// to other function adding necessary parameters
void print_left(Node *root)
{
    print_left_rec(root, 1);
}

// Iterative Method :
// Using level order traversal
void print_left_view(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *cur = q.front();
            q.pop();
            if (i == 0)
                cout << cur->data << " ";
            if (cur->left != NULL)
            {
                q.push(cur->left);
            }
            if (cur->right != NULL)
            {
                q.push(cur->right);
            }
        }
    }
}

int main()
{
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->left = new Node(20);
    root->left->right = new Node(30);
    root->right->left = new Node(30);
    root->right->right = new Node(40);
    // Iterative
    print_left_view(root);
    cout << endl;
    // Recursive
    print_left(root);
    return 0;
}