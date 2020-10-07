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

// Children Sum
bool get_csum(Node *root)
{
    // Base Cases
    if (root == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return true;

    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;
    if (root->right != NULL)
        sum += root->right->data;
    return (root->data == sum && get_csum(root->left) && get_csum(root->right));
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << get_csum(root);
}