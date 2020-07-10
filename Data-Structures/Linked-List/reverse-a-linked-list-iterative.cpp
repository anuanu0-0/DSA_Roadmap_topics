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

Node *reverseList(Node *head)
{
    Node *prev = NULL, *cur = head;
    Node *next;

    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

int main()
{
    Node *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printList(head);
    cout << '\n'
         << "Reversed"
         << " ";
    head = reverseList(head);
    printList(head);
    return 0;
}
