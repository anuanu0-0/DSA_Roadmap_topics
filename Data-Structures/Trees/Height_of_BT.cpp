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

int get_height(Node *root)
{
    if (root == NULL)
        return 0;

    return max(get_height(root->left), get_height(root->right)) + 1;
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

    cout << get_height(root) << endl;
    return 0;
}