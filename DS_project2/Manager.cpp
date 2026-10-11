#include "Manager.h"

Manager::Manager()
{
    avl = new AVLTree();
    bp = new BpTree(3);

    const string categories[5] = { "Electronics", "Fashion", "Furniture", "Book", "Sports" };
    for (int i = 0; i < 5; i++)
        heap[i] = new CategoryHeap(categories[i]);
}

Manager::~Manager()
{
    // release B+ Tree and heaps first (pointers only), then AVL Tree (owns ItemData)
    delete bp;
    for (int i = 0; i < 5; i++)
        delete heap[i];
    delete avl;
}

void Manager::run(const char* command)
{
    
}

bool Manager::LOAD(const vector<string>& args)
{
    
}

bool Manager::ADD(const vector<string>& args)
{
    
}

bool Manager::UPDATE(const vector<string>& args)
{
    
}

bool Manager::SEARCH(const vector<string>& args)
{
    
}

bool Manager::PRINT(const vector<string>& args)
{
    
}

void Manager::EXIT()
{
    
}

void Manager::printSuccess(const string& cmd)
{
    flog << "========" << cmd << "========" << endl;
    flog << "Success" << endl;
    flog << "====================" << endl << endl;
}

void Manager::printErrorCode(int code)
{
    flog << "========ERROR========" << endl;
    flog << code << endl;
    flog << "=====================" << endl << endl;
}
