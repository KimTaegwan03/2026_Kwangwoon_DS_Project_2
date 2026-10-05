#pragma once
#include "ItemData.h"
#include <vector>
#include <map>

// Base class of B+ Tree nodes
class BpTreeNode
{
private:
    BpTreeNode* pParent;

public:
    BpTreeNode() : pParent(nullptr) {}
    virtual ~BpTreeNode() {}

    BpTreeNode* getParent() { return pParent; }
    void setParent(BpTreeNode* node) { pParent = node; }

    // node type
    virtual bool isLeaf() = 0;
    virtual int getKeyCount() = 0;

    // data node interface (linked list of leaves)
    virtual BpTreeNode* getNext() { return nullptr; }
    virtual BpTreeNode* getPrev() { return nullptr; }
    virtual void setNext(BpTreeNode* node) {}
    virtual void setPrev(BpTreeNode* node) {}
    virtual map<int, vector<ItemData*>>* getDataMap() { return nullptr; }
    virtual void insertDataMap(int price, ItemData* pItem) {}
    virtual void deleteDataMap(int price) {}

    // index node interface
    virtual vector<int>* getKeys() { return nullptr; }
    virtual vector<BpTreeNode*>* getChildren() { return nullptr; }
};
