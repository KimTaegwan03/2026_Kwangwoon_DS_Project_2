#pragma once
#include "AVLNode.h"
#include <stack>

// AVL Tree class (key: item ID, case-insensitive)
class AVLTree
{
private:
    AVLNode* root;

    // rotations
    AVLNode* rotateLL(AVLNode* node);
    AVLNode* rotateRR(AVLNode* node);
    AVLNode* rotateLR(AVLNode* node);
    AVLNode* rotateRL(AVLNode* node);

    // case-insensitive comparison: <0, 0, >0
    int compareId(const string& a, const string& b);

public:
    AVLTree();
    ~AVLTree();

    bool isEmpty() { return root == nullptr; }
    AVLNode* getRoot() { return root; }

    bool Insert(ItemData* pItem);          // insert and rebalance
    ItemData* Search(const string& itemId); // search by item ID
    bool Print(ofstream& os);              // inorder traversal
};
