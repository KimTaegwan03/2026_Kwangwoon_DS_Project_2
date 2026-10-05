#pragma once
#include "ItemData.h"

// AVL Tree node class
class AVLNode
{
private:
    ItemData* pData;  // item data (owned by AVLTree)
    AVLNode* pLeft;   // left child
    AVLNode* pRight;  // right child
    int bf;           // balance factor = height(left) - height(right)

public:
    AVLNode() : pData(nullptr), pLeft(nullptr), pRight(nullptr), bf(0) {}
    AVLNode(ItemData* data) : pData(data), pLeft(nullptr), pRight(nullptr), bf(0) {}
    ~AVLNode() {}

    // getters
    ItemData* getData() { return pData; }
    AVLNode* getLeft() { return pLeft; }
    AVLNode* getRight() { return pRight; }
    int getBF() { return bf; }

    // setters
    void setData(ItemData* data) { pData = data; }
    void setLeft(AVLNode* node) { pLeft = node; }
    void setRight(AVLNode* node) { pRight = node; }
    void setBF(int b) { bf = b; }
};
