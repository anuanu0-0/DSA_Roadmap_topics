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

// Return max element
int max_element(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    return max(root->data, max(max_element(root->left), max_element(root->right)));
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

    cout << max_element(root) << endl;
    return 0;
}