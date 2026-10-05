#pragma once
#include "AVLTree.h"
#include "BpTree.h"
#include <string>
#include <vector>

// Manager class: reads commands and controls the trees
class Manager
{
private:
    AVLTree* avl;
    BpTree* bp;
    ifstream fcmd;
    ofstream flog;

    // output helpers
    void printSuccess(const string& cmd);
    void printErrorCode(int code);

public:
    Manager();
    ~Manager();

    void run(const char* command);

    // commands
    bool LOAD(const vector<string>& args);
    bool ADD(const vector<string>& args);
    bool UPDATE(const vector<string>& args);
    bool SEARCH_BP(const vector<string>& args);
    bool SEARCH_AVL(const vector<string>& args);
    bool PRINT_BP(const vector<string>& args);
    bool PRINT_AVL(const vector<string>& args);
    void EXIT();
};
