#pragma once
#include "BpTreeNode.h"

// B+ Tree index (internal) node
// keys[i] separates children[i] and children[i+1]
class BpTreeIndexNode : public BpTreeNode
{
private:
    vector<int> keys;
    vector<BpTreeNode*> children;

public:
    BpTreeIndexNode() {}
    ~BpTreeIndexNode() {}

    bool isLeaf() { return false; }
    int getKeyCount() { return (int)keys.size(); }

    vector<int>* getKeys() { return &keys; }
    vector<BpTreeNode*>* getChildren() { return &children; }
};
