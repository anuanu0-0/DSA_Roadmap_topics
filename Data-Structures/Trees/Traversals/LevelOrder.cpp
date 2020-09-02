//  Level Order Traversal
//  Time Complexity : Theta(n)
//  Auxilary Space : O(n) or Theta(w), where w is width of binary tree
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

void printLevel(Node *root)
{
    //  If root is null, return
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();
        cout << cur->data << " ";
        //  Push children if exists
        if (cur->left != NULL)
            q.push(cur->left);
        if (cur->right != NULL)
            q.push(cur->right);
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

    printLevel(root);
    return 0;
}