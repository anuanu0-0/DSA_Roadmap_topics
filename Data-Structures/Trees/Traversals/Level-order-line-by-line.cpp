// Time Complexity : Theta(n)
// Auxilary Space : O(n)

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

//   Method 1:
void printLevelOrderLine1(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    //  Insert NULL to mark next line
    q.push(NULL);
    while (q.size() > 1)
    {

        Node *cur = q.front();
        q.pop();

        //  If cur is NULL, means we have reached end of current Level
        //  Insert NULL as all its children are pushed into the queue
        //  As NULL's Children will result in Segmentation fault, therefore continue
        if (cur == NULL)
        {
            cout << '\n';
            q.push(NULL);
            continue;
        }
        cout << cur->data << " ";
        if (cur->left != NULL)
            q.push(cur->left);
        if (cur->right != NULL)
            q.push(cur->right);
    }
}

//  Method 2:

void printLevelOrderLine2(Node *root)
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
            cout << cur->data << " ";
            if (cur->left != NULL)
                q.push(cur->left);
            if (cur->right != NULL)
                q.push(cur->right);
        }
        cout << endl;
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
    // Methdo 1
    printLevelOrderLine1(root);
    //Method 2
    printLevelOrderLine2(root);
    return 0;
}