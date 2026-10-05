#include "Manager.h"

Manager::Manager()
{
    avl = new AVLTree();
    bp = new BpTree(3);
}

Manager::~Manager()
{
    // release B+ Tree first (pointers only), then AVL Tree (owns ItemData)
    delete bp;
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

bool Manager::SEARCH_BP(const vector<string>& args)
{
    
}

bool Manager::SEARCH_AVL(const vector<string>& args)
{
    
}

bool Manager::PRINT_BP(const vector<string>& args)
{
    
}

bool Manager::PRINT_AVL(const vector<string>& args)
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
