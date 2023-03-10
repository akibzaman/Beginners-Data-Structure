# **Basic-Data-Structure**

This repository contains the basic data structure and algorithms in C++. The code is written in a way that it can be easily understood by beginners.

## **Table of Contents**

- **[Array](#1-array)**
- **[Linked List](#2-linked-list)**
- **[Stack](#3-stack)**
- **[Queue](#4-queue)**
- **[Binary Tree](#5-binary-tree)**
- **[Binary Search Tree](#6-binary-search-tree)**
- **[Heap and Priority Queue](#7-heap-and-priority-queue)**
- **[Graph](#8-graph)**
- **[Hashing](#9-hashing)**

## **[1. Array](./Array)**

Array is a collection of similar type of data items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

- **[2DArray.cpp](./Array/2DArray.cpp)**
- **[BubbleSort.cpp](./Array/BubbleSort.cpp)**
- **[binarySearch.cpp](./Array/binarySearch.cpp)**
- **[countingSort.cpp](./Array/countingSort.cpp)**
- **[insertionSort.cpp](./Array/insertionSort.cpp)**
- **[linearSearch.cpp](./Array/linearSearch.cpp)**

## **[2. Linked List](./Linked%20List)**

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

- **[circularLinkedList.cpp](./Linked%20List/circularLinkedList.cpp)**
- **[doublyLinkedList.cpp](./Linked%20List/doublyLinkedList.cpp)**
- **[linearLinkedList.cpp](./Linked%20List/linearLinkedList.cpp)**

## **[3. Stack](./Stack)**

A stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). Mainly the following three basic operations are performed in the stack: Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition. Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition. Peek or Top: Returns top element of stack. IsEmpty: Returns true if stack is empty, else false.

- **[MYSTACK.h](./Stack/MYSTACK.h)**
- **[infixToPrefix.cpp](./Stack/infixToPrefix.cpp)**
- **[prefixEvaluation.cpp](./Stack/prefixEvaluation.cpp)**
- **[reverseSentence.cpp](./Stack/reverseSentence.cpp)**
- **[reverseStack.cpp](./Stack/reverseStack.cpp)**

## **[4. Queue](./Queue)**

A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

- **[MYQUEUE.h](./Queue/MYQUEUE.h)**
- **[balancedpar.cpp](./Queue/balancedpar.cpp)**
- **[curmin.cpp](./Queue/curmin.cpp)**
- **[kreverse.cpp](./Queue/kreverse.cpp)**

## **[5. Binary Tree](./Binary%20Tree)**

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A node with no children is called a leaf. A node with no parent is called the root. A binary tree with a single node is called a degenerate or pathological tree. A binary tree is either empty or consists of a root node and two binary trees, called the left subtree and the right subtree.

- **[binaryTree.cpp](./Binary%20Tree/binaryTree.cpp)**
- **[preorderInordertoBinary.cpp](./Binary%20Tree/preorderInordertoBinary.cpp)**

## **[6. Binary Search Tree](./BST)**

Binary Search Tree is a node-based binary tree data structure which has the following properties: The left subtree of a node contains only nodes with keys lesser than the node’s key. The right subtree of a node contains only nodes with keys greater than the node’s key. The left and right subtree each must also be a binary search tree. There must be no duplicate nodes.

- **[bst.cpp](./BST/bst.cpp)**

## **[7. Heap and Priority Queue](./Heap%20and%20Priority%20queue)**

A heap is a specialized tree-based data structure that satisfies the heap property: if P is a parent node of C, then the key (the value) of P is either greater than or equal to (in a max heap) or less than or equal to (in a min heap) the key of C. A common implementation of a heap is the binary heap, in which the tree is a complete binary tree.

- **[heap.cpp](./Heap%20and%20Priority%20queue/heap.cpp)**
- **[mergeKSorted.cpp](./Heap%20and%20Priority%20queue/mergeKSorted.cpp)**
- **[vectorPQSTL.cpp](./Heap%20and%20Priority%20queue/vectorPQSTL.cpp)**

## **[8. Graph](./Graph)**

A graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph can be defined as, A Graph consists of a finite set of vertices(or nodes) and set of Edges which connect a pair of nodes.

- **[graph.cpp](./Graph/graph.cpp)**

## **[9. Hashing](./Hashing)**

Hashing is a technique to convert a range of key values into a range of indexes of an array. The idea is to use a hash function that converts a given key to a smaller number and uses the small number as an index in a table called hash table.

- **[VerticalOrder.cpp](./Hashing/VerticalOrder.cpp)**
- **[freq.cpp](./Hashing/freq.cpp)**
- **[hashing.cpp](./Hashing/hashing.cpp)**
