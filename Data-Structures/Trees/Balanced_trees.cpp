
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

// Naive Approach
// TC: O(n^2)
// Helper function to get height
int get_height(Node *root)
{
    if (root == NULL)
        return 0;

    return max(get_height(root->left), get_height(root->right)) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;

    // If diff b/w left subtree and right subtree is
    //  greater than 1 then return false else true

    int lsub = get_height(root->left);
    int rsub = get_height(root->right);

    return (abs(lsub - rsub) < 2 && isBalanced(root->left) && isBalanced(root->right));
}

// Efficient Solution
// TC: O(n)
int isBalancedFast(Node *root)
{
    if (root == NULL)
        return 0;
    // Check for left subtree
    int ltree = isBalancedFast(root->left);
    if (ltree == -1)
        return -1;
    // Check for right subtree
    int rtree = isBalancedFast(root->right);
    if (rtree == -1)
        return -1;
    if (abs(rtree - ltree) > 1)
        return -1;

    return max(ltree, rtree) + 1;
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

    cout << isBalanced(root) << endl;
    if (isBalancedFast(root) == -1)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}