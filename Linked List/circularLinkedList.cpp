#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int value);

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }

    Node *temp = head;

    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head; // newNode->Next = temp->Next
    temp->Next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    // s1: newNode creation
    Node *newNode = new Node(val);
    // s2: Update of newNode->Next
    newNode->Next = head;
    // s3: Update the Tail with New head
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    // s4: Update of head
    head = newNode;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty" << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->value;
        temp = temp->Next;
        if (temp != head)
            cout << " -> ";
    } while (temp != head);

    cout << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
    {
        count++;
        temp = temp->Next;
    } while (temp != head);

    return count;
}

void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->Next; // 2 3
        i++;               // 1 2
    }

    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        Node *delNode = temp;
        while (temp->Next != head)
        {
            temp = temp->Next;
        }
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
    }
    else
    {
        cout << "There is No Value in the Linked List" << endl;
    }
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != head)
    {
        while (temp->Next->Next != head)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = delNode->Next;
        delete delNode;
    }

    else
    {
        // Head is Null
        if (temp == NULL)
            cout << "There is No Value in the Linked List" << endl;

        // Head is Tail
        else
            deletionAtHead(head);
    }
}

void deletionAtSpecificPosition(Node *&head, int position)
{

    Node *temp = head;
    if (position <= countLength(head))
    {

        if (position == 1)
        {
            deletionAtHead(head);
        }
        else if (position == countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i = 1;
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }

            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        // Position is Out of Range
        // if (position > countLength(head))
        // {
        cout << "Position Out of Bound";
        // }
        //     // LL is NULL
        //     else
        //         cout << "There is No Value in the Linked List" << endl;
        //
    }
}

int main()
{
    Node *head = NULL;

    int value, position;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
         << "Choice 3: Insertion at Specific Position" << endl
         << "Choice 4: Deletion at Head" << endl
         << "Choice 5: Deletion at Tail" << endl
         << "Choice 6: Deletion at a Specific Position" << endl
         << "Choice 0: Exit" << endl
         << endl;
    cout << "Next Choice: ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the Value: ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "Enter the Value: ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 4:
            deletionAtHead(head);
            break;
        case 5:
            deletionAtTail(head);
            break;
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length of the List: " << countLength(head) << endl;

    return 0;
}