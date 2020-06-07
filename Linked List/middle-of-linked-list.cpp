
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

//Function to print middle element
void printMiddleElement(Node *href)
{
    if (href == NULL)
        return;
    Node *slow = href, *fast = href;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}
int main()
{
    Node *head = NULL;
    append(&head, 6);
    append(&head, 4);
    append(&head, 7);
    append(&head, 1);
    append(&head, 9);
    append(&head, 8);

    printList(head);
    cout << endl;
    printMiddleElement(head);

    return 0;
}
