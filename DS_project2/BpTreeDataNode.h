#pragma once
#include "BpTreeNode.h"

// B+ Tree data (leaf) node
// key: price, value: items with the same price in insertion order
class BpTreeDataNode : public BpTreeNode
{
private:
    map<int, vector<ItemData*>> mapData;
    BpTreeNode* pNext;
    BpTreeNode* pPrev;

public:
    BpTreeDataNode() : pNext(nullptr), pPrev(nullptr) {}
    ~BpTreeDataNode() {}

    bool isLeaf() { return true; }
    int getKeyCount() { return (int)mapData.size(); }

    BpTreeNode* getNext() { return pNext; }
    BpTreeNode* getPrev() { return pPrev; }
    void setNext(BpTreeNode* node) { pNext = node; }
    void setPrev(BpTreeNode* node) { pPrev = node; }

    map<int, vector<ItemData*>>* getDataMap() { return &mapData; }

    // append item to the vector of the key (create the key if it does not exist)
    void insertDataMap(int price, ItemData* pItem) { mapData[price].push_back(pItem); }

    // remove the whole key
    void deleteDataMap(int price) { mapData.erase(price); }
};
