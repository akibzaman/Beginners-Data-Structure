#include <bits/stdc++.h>

using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printTree(treeNode *root, int level);
void spacePrint(int level);

void inOrder(treeNode *root, string &chk) // Left Root Right
{

    if (root == NULL)
        return;

    inOrder(root->leftChild, chk);
    chk += (to_string(root->data) + " ");
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk) // Root Left Right
{

    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) // Left Right Root
{

    if (root == NULL)
        return;

    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

void printTree(treeNode *root, int level)
{
    if (root == NULL) // WHEN THE TREE IS EMPTY
    {
        return;
    }

    if (root->leftChild == NULL && root->rightChild == NULL) // CASE 1
    {
        cout << root->data << endl;
        return;
    }

    else // CASE 2
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }

    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

void spacePrint(int level)
{

    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

int levelOrderTraversal(treeNode *root, string &chk, int k)
{

    if (root == NULL)
    {
        return -1;
    }
    int level = 0;
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    int max = -9999;

    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            if (level == k)
            {
                if (max < chkNode->data)
                {
                    max = chkNode->data;
                }
            }
            cout << chkNode->data << " ";
            chk += to_string(chkNode->data);
            if (chkNode->leftChild != NULL)
            {
                q.push(chkNode->leftChild);
            }
            if (chkNode->rightChild != NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }

    return max;
}

void printLeaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}

void printLeftNonLeaves(treeNode *root)
{

    if (root == NULL)
        return;
    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->rightChild);
    }
}

void printRightNonLeaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->leftChild);
    }
}

void boundaryTraversal(treeNode *root)
{

    if (root == NULL)
        return;
    cout << root->data << " ";

    // LB Non-Leaves
    printLeftNonLeaves(root->leftChild);
    // LB Leaves
    printLeaves(root->leftChild);
    // RB Leaves
    printLeaves(root->rightChild);
    // RB Non-Leaves
    printRightNonLeaves(root->rightChild);
}

treeNode *insertionBST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);

    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    // value < root -> data
    if (value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }
    // value > root-> data
    else if (value > root->data)
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }

    return root;
}

treeNode *searchBST(treeNode *root, int value)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == value)
    {
        cout << root->data;
        return root;
    }

    else if (value < root->data)
    {
        cout << root->data << " -> ";
        searchBST(root->leftChild, value);
    }

    else
    {
        cout << root->data << " -> ";
        searchBST(root->rightChild, value);
    }
}

treeNode *inordersucc(treeNode *root)
{
    treeNode *curr = root;
    while (curr->leftChild != NULL)
    {
        curr = curr->leftChild;
    }
    return curr;
}

treeNode *deletionBST(treeNode *root, int value)
{
    if (value < root->data)
    {
        root->leftChild = deletionBST(root->leftChild, value);
    }
    else if (value > root->data)
    {
        root->rightChild = deletionBST(root->rightChild, value);
    }

    else
    {
        // Implementation of 3 case
        if (root->leftChild == NULL)
        { // CASE 1 | CASE 2
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }

        else if (root->rightChild == NULL)
        { // CASE 2
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }
        else
        { // CASE 3
            treeNode *temp = inordersucc(root->rightChild);
            root->data = temp->data;
            root->rightChild = deletionBST(root->rightChild, temp->data);
        }

        return root;
    }
}

void zigzagTraversal(treeNode *root)
{

    stack<treeNode *> currentLevel;
    stack<treeNode *> nextLevel;

    bool lefttoRight = true;

    currentLevel.push(root);

    while (!currentLevel.empty())
    {
        treeNode *x = currentLevel.top();
        currentLevel.pop();

        cout << x->data << " ";

        if (lefttoRight)
        {
            if (x->leftChild)
            {
                nextLevel.push(x->leftChild);
            }
            if (x->rightChild)
            {
                nextLevel.push(x->rightChild);
            }
        }

        else
        {
            if (x->rightChild)
            {
                nextLevel.push(x->rightChild);
            }
            if (x->leftChild)
            {
                nextLevel.push(x->leftChild);
            }
        }
        
        if(currentLevel.empty()){
            lefttoRight = !lefttoRight;
            swap(currentLevel,nextLevel);
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }
    string traversal = "";
    inOrder(root, traversal);
    cout << traversal << endl;

    zigzagTraversal(root);
    // int key;
    // cin >> key;
    // if (searchBST(root, key) == NULL)
    // {
    //     cout << endl
    //          << "Value does not exits in the BST";
    // }
    // else
    // {
    //     cout << endl
    //          << "Value exits in the BST";
    // }

    // root = deletionBST(root, key);
    // string after = "";
    // inOrder(root, after);
    // cout << after;

    cout << endl
         << endl;
    return 0;
}
/*
10
11 5 9 43 34 1 2 7 8 21
*/