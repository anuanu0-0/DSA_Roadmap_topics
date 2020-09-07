//  Time Complexity : O(n)
//  Auxilary Space for Recursive solution : O(h), where h is height of binary tree
//  Auxilary Space for Iterative solution : O(w), where w is the width of the binary tree

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

//  Recursive Solution
int getSize1(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + getSize1(root->left) + getSize1(root->right);
}

//  Iterative Solution
int getSize2(Node *root)
{
    //  If root is null, return
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int count = 0;
    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();
        count++;
        //  Push children if exists
        if (cur->left != NULL)
            q.push(cur->left);
        if (cur->right != NULL)
            q.push(cur->right);
    }
    return count;
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

    //  Recursive Solution
    cout << "Size : " << getSize1(root) << '\n';

    //  Iterative Solution
    cout << "Size : " << getSize2(root) << '\n';
    return 0;
}