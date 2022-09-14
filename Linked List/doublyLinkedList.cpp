#include <bits/stdc++.h>

using namespace std;

class doublyNode{
public:
    int val;
    doublyNode* prev;
    doublyNode* next;

    doublyNode(int val){
        this->val=val;
        prev = NULL;
        next = NULL;
    }

};

void insertAtTail(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    doublyNode *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev=temp;
}

void insertAtHead(doublyNode* &head, int val){
    // s1: newNode creation
    doublyNode *newNode = new doublyNode(val);
    //s2: Update of head->prev
    head->prev = newNode;
    // s3: Update of newNode->Next
    newNode->next = head;
    // s4: Update of head
    head = newNode;
}

void display(doublyNode* n)
{
    while (n != NULL)
    {
        cout << n-> val ;
        if (n->next != NULL)
            cout << " ---> ";
        n = n->next;
    }
    cout << endl
         << endl;
}

void displayReverse(doublyNode* &head)
{
    doublyNode* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while (temp != NULL)
    {
        cout << temp-> val ;
        if (temp->prev != NULL)
            cout << " ---> ";
        temp = temp->prev;
    }
    cout << endl
         << endl;
}

int countLength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}


int main()
{
    doublyNode *head = NULL;

    int value, position;
    // Choice 1: Insertion at Head
    // Choice 2: Insertion at Tail
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
         << "Choice 3: Reverse Print" << endl
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
        case 3:
            displayReverse(head);
            break;
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl << "Doubly Linked List: ";
    display(head);
    cout << "Length of the Doubly Linked List: " << countLength(head) << endl;

    return 0;
}