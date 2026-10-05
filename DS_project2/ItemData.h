#pragma once
#include <string>
#include <fstream>
using namespace std;

// Item information class
class ItemData
{
private:
    string itemId;   // 'P' + 5 digits
    string sellerId; // 'S' + 4 digits
    string category; // Electronics, Fashion, Furniture, Book, Sports
    int price;       // positive integer
    string status;   // OnSale, Reserved, SoldOut

public:
    ItemData() : price(0) {}
    ItemData(const string& itemId, const string& sellerId, const string& category,
             int price, const string& status)
        : itemId(itemId), sellerId(sellerId), category(category), price(price), status(status) {}
    ~ItemData() {}

    // getters
    string getItemId() const { return itemId; }
    string getSellerId() const { return sellerId; }
    string getCategory() const { return category; }
    int getPrice() const { return price; }
    string getStatus() const { return status; }

    // setters
    void setItemId(const string& id) { itemId = id; }
    void setSellerId(const string& id) { sellerId = id; }
    void setCategory(const string& c) { category = c; }
    void setPrice(int p) { price = p; }
    void setStatus(const string& s) { status = s; }
};
