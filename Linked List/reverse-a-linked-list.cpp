#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *n)
{
    cout << "List:" << '\n';
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

//Append nodes
void append(Node **head, int key)
{
    Node *new_node = new Node(key);
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    Node *cur = *head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = new_node;
}

void reverseList(Node **head)
{
}

int main()
{
    Node *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printList(head);
    cout << endl;
    reverseList(&head);
    return 0;
}
