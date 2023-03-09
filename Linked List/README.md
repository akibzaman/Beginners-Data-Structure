# **Linked List**

Linked List is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

There are two types of linked list:

- **Singly Linked List**: Each node of a singly linked list contains two items - the data and a reference to the next node. The last node has a reference to null. The entry point into a linked list is called the head of the list. It should be noted that head is not a separate node, but the reference to the first node. If the list is empty then the head is a null reference.

- **Doubly Linked List**: Each node of a doubly linked list contains three items - the data, a reference (link) to the next node and a reference to the previous node. The last node has a reference to null. The entry point into a doubly linked list is called the head of the list. It should be noted that head is not a separate node, but the reference to the first node. If the list is empty then the head is a null reference.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png" alt="Linked List" width="500"/>

Source: [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/)

## Code Examples

- **[circularLinkedList.cpp](circularLinkedList.cpp)**
- **[doublyLinkedList.cpp](doublyLinkedList.cpp)**
- **[linearLinkedList.cpp](linearLinkedList.cpp)**
