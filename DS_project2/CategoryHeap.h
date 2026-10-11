#pragma once
#include "ItemData.h"
#include <vector>

// Min Heap class for one category (key: price, tie: item ID)
// array-based complete binary tree, only items on sale
class CategoryHeap
{
private:
    string category;          // category of this heap
    vector<ItemData*> heap;   // array of the complete binary tree

public:
    CategoryHeap(const string& category);
    ~CategoryHeap();

    bool isEmpty() { return heap.empty(); }
    int getSize() { return (int)heap.size(); }
    string getCategory() { return category; }

    bool Insert(ItemData* pItem);           // insert and sift up
    bool Delete(ItemData* pItem);           // replace with last element and sift
    bool searchLowest(int n, ofstream& os); // SEARCH Category: n lowest items in ascending order
    bool Print(ofstream& os);               // PRINT Category: array order
};
