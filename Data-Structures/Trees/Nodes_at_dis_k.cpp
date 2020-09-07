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

void print_at_dis_k(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << " ";
    else
    {
        print_at_dis_k(root->left, k - 1);
        print_at_dis_k(root->right, k - 1);
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

    int k;
    cin >> k;
    print_at_dis_k(root, k);
    return 0;
}