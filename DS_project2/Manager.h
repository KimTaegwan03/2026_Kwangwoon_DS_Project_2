#pragma once
#include "AVLTree.h"
#include "BpTree.h"
#include "CategoryHeap.h"
#include <string>
#include <vector>

// Manager class: reads commands and controls the data structures
class Manager
{
private:
    AVLTree* avl;
    BpTree* bp;
    CategoryHeap* heap[5]; // Electronics, Fashion, Furniture, Book, Sports
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
    bool SEARCH(const vector<string>& args);
    bool PRINT(const vector<string>& args);
    void EXIT();
};
