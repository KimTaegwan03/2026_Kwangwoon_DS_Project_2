#pragma once
#include "BpTreeDataNode.h"
#include "BpTreeIndexNode.h"

// B+ Tree class (key: price, only items on sale)
class BpTree
{
private:
    BpTreeNode* root;
    int order; // order of B+ Tree (3)

public:
    BpTree(int order = 3);
    ~BpTree();

    bool isEmpty() { return root == nullptr; }
    BpTreeNode* getRoot() { return root; }

    bool Insert(ItemData* pItem);          // insert item by price
    bool Delete(ItemData* pItem);          // remove item, delete key if vector is empty
    BpTreeNode* searchDataNode(int price); // find the data node that should contain price

    bool searchItem(int price, ofstream& os);                  // SEARCH_BP with 1 argument
    bool searchRange(int minPrice, int maxPrice, ofstream& os); // SEARCH_BP with 2 arguments
    bool printAll(ofstream& os);                               // PRINT_BP
};
