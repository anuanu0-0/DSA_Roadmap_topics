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

//Print nth node from end
void printNthFromEnd(Node *head, int n)
{
    //Assuming that head+n node exists
    if (head == NULL)
        return;
    Node *first = head;
    Node *second = head;

    for (int i = 0; i < n; i++)
        first = first->next;
    while (first->next != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->next->data;
}

int main()
{
    Node *head = NULL;
    int x = 2;
    append(&head, 6);
    append(&head, 4);
    append(&head, 7);
    append(&head, 1);
    append(&head, 9);
    append(&head, 8);

    printList(head);
    cout << endl;

    printNthFromEnd(head, x);

    return 0;
}
